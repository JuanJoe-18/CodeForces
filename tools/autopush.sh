#!/usr/bin/env bash
# CodeForces autopush watcher (WSL Arch, nativo).
# Hace polling cada $AUTOPUSH_INTERVAL segundos (default 60):
#   pull --rebase --autostash -> add -A -> commit -> push
# Uso:
#   tools/autopush.sh           # loop infinito (lo corre systemd)
#   tools/autopush.sh --once    # una sola sincronizacion
set -u
REPO="/root/cp_test/CodeForces"
BRANCH="${AUTOPUSH_BRANCH:-main}"
INTERVAL="${AUTOPUSH_INTERVAL:-60}"
LOG="$REPO/.git/autopush.log"
LOCK="$REPO/.git/autopush.lock"

log() { echo "[$(date '+%F %T')] $*" >>"$LOG"; }

sync_once() {
  exec 9>"$LOCK"
  flock -n 9 || { log "SKIP: otra instancia corriendo"; return 0; }

  cd "$REPO" || { log "ERROR: no puedo entrar a $REPO"; return 1; }
  git rev-parse --git-dir >/dev/null 2>&1 || { log "ERROR: no es repo git"; return 1; }

  # 1) bajar cambios remotos (no falla si no hay red)
  git pull --rebase --autostash origin "$BRANCH" >>"$LOG" 2>&1 \
    || log "WARN: pull --rebase fallo (sigo igual)"

  # 2) si no hay cambios, nada que hacer
  if [ -z "$(git status --porcelain)" ]; then return 0; fi

  # 3) stage + commit + push
  git add -A >>"$LOG" 2>&1
  if [ -z "$(git status --porcelain)" ]; then return 0; fi
  git commit -m "auto-sync: $(date '+%F %T')" >>"$LOG" 2>&1 \
    || { log "ERROR: commit fallo"; return 1; }
  git push origin "$BRANCH" >>"$LOG" 2>&1 \
    || { log "ERROR: push fallo"; return 1; }
  log "OK: auto-sync pusheado"
}

if [ "${1:-}" = "--once" ]; then
  sync_once
  exit $?
fi

log "START: watcher cada ${INTERVAL}s en $REPO ($BRANCH)"
while true; do
  sync_once
  sleep "$INTERVAL"
done
