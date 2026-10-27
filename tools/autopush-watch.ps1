# CodeForces autopush watcher (Windows PowerShell).
# Polling cada $IntervalSeconds (default 60). Funciona sobre \\wsl.localhost
# donde FileSystemWatcher no es confiable, por eso se usa polling con git.
#
# Uso:
#   powershell -ExecutionPolicy Bypass -File tools\autopush-watch.ps1          # loop infinito
#   powershell -ExecutionPolicy Bypass -File tools\autopush-watch.ps1 -Once    # una sola vez
param(
  [string]$RepoRoot = (Split-Path -Parent $PSScriptRoot),
  [int]$IntervalSeconds = 60,
  [switch]$Once
)

$Log = Join-Path $RepoRoot ".git\autopush-ps.log"
function Write-Log($msg) { "[$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')] $msg" | Add-Content $Log }

function Sync-Once {
  git -C $RepoRoot pull --rebase --autostash origin main >> $Log 2>&1
  if (-not (git -C $RepoRoot status --porcelain)) { return }
  git -C $RepoRoot add -A >> $Log 2>&1
  if (-not (git -C $RepoRoot status --porcelain)) { return }
  $msg = "auto-sync: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"
  git -C $RepoRoot commit -m $msg >> $Log 2>&1
  if ($LASTEXITCODE -ne 0) { Write-Log "ERROR: commit fallo"; return }
  git -C $RepoRoot push origin main >> $Log 2>&1
  if ($LASTEXITCODE -ne 0) { Write-Log "ERROR: push fallo"; return }
  Write-Log "OK: auto-sync pusheado"
}

if ($Once) { Sync-Once; exit 0 }
Write-Log "START: watcher PS cada ${IntervalSeconds}s en $RepoRoot"
while ($true) { Sync-Once; Start-Sleep -Seconds $IntervalSeconds }
