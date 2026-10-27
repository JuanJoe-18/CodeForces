# Setup Programación Competitiva — Guía Rápida

> Stack actual: C++17, WSL + CLion (CMake), `Templates/debug.h`, `A_Templates/PlantillaGoat.cpp`.

## 1. Compilar

| Qué | Comando (WSL / Linux) | Notas |
|---|---|---|
| Compilar simple | `g++ -o sol sol.cpp` | Genera `./sol` |
| Compilar pro (recomendado) | `g++ -std=c++17 -O2 -Wall -Wextra -o sol sol.cpp` | `-O2` = velocidad juez, `-Wall` = warnings |
| Compilar con debug local | `g++ -std=c++17 -DLOCAL -g -o sol sol.cpp` | Activa `dbg()` de `Templates/debug.h` |
| Compilar y correr | `g++ -o sol sol.cpp && ./sol` | Para tipeo manual |
| Limpiar binarios | `rm -f sol sol.exe a.out` | No subir binarios a git |

PowerShell (Windows nativo, sin WSL):

| Qué | Comando |
|---|---|
| Compilar | `g++ -std=c++17 -O2 -Wall -o sol.exe sol.cpp` |
| Correr | `.\sol.exe` |

## 2. Probar con `in.txt` (lo que más vas a usar)

| Qué | Comando WSL | Comando PowerShell |
|---|---|---|
| Correr con input | `./sol < in.txt` | `Get-Content in.txt \| .\sol.exe` |
| Guardar output | `./sol < in.txt > out.txt` | `Get-Content in.txt \| .\sol.exe \| Out-File out.txt` |
| Ver output | `cat out.txt` | `Get-Content out.txt` |
| Crear `in.txt` rápido | `cat > in.txt` + pegar + `Ctrl+D` | `notepad in.txt` |
| Echo rápido | `echo "5 1 2 3 4 5" > in.txt` | `echo "5 1 2 3 4 5" > in.txt` |
| Comparar con esperado | `diff -w out.txt expected.txt && echo OK` | `Compare-Object (Get-Content out.txt) (Get-Content expected.txt)` |
| Múltiples tests | `./sol < in1.txt > out1.txt` | Igual, cambia `1` por `2,3...` |
| Tiempo de ejecución | `time ./sol < in.txt > out.txt` | `Measure-Command { Get-Content in.txt \| .\sol.exe }` |

Regla: nunca uses `freopen()` en el código final si usas redirección. Son excluyentes.

## 3. Debug local

| Qué | Cómo |
|---|---|
| Template debug | `#include "Templates/debug.h"` + `#define LOCAL` o compilar con `-DLOCAL` |
| Print debug | `dbg(x, v, ans);` → sale por `cerr`, no contamina `cout` |
| Ver solo errores | `./sol < in.txt 2> err.txt` |
| Ver output + errores | `./sol < in.txt > out.txt 2> err.txt` |
| Ignorar `dbg` en juez | No definir `LOCAL`. La macro queda vacía sola |
| FastIO siempre | `ios::sync_with_stdio(false); cin.tie(0);` (ya está en `PlantillaGoat.cpp`) |

## 4. Generar inputs aleatorios

| Qué | Comando / Código |
|---|---|
| Python una línea | `python3 -c "import random; n=1000; print(n); print(*[random.randint(1,1e9) for _ in range(n)])" > in.txt` |
| Bash secuencia | `shuf -i 1-1000000 -n 1000 \| tr '\n' ' ' > in.txt` |
| C++ generador | `g++ -o gen gen.cpp && ./gen 42 > in.txt` |

Plantilla `gen.cpp`:
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
  mt19937 rng(argc>1 ? atoi(argv[1]) : 42);
  int n = rng()%10 + 1;
  cout << n << "\n";
  for(int i=0;i<n;i++) cout << (rng()%100) << " \n"[i==n-1];
}
```

## 5. Stress test (sol vs brute)

| Paso | Comando |
|---|---|
| Compilar todo | `g++ -O2 -o sol sol.cpp && g++ -O2 -o brute brute.cpp && g++ -O2 -o gen gen.cpp` |
| Loop 1000 casos | `for i in $(seq 1 1000); do ./gen $i > in.txt; ./sol < in.txt > o1.txt; ./brute < in.txt > o2.txt; diff -q o1.txt o2.txt \|\| { echo "FAIL $i"; cat in.txt; break; }; done; echo OK` |
| Con `while true` | `while true; do ./gen $RANDOM > in.txt; ./sol < in.txt > o1.txt; ./brute < in.txt > o2.txt; diff -q o1.txt o2.txt \|\| { cat in.txt; break; }; done` |

`brute.cpp` = solución O(n²) / obvia que sabes que está bien. `sol.cpp` = tu solución optimizada.

## 6. CLion + CMake (tu setup actual)

| Qué | Dónde / Cómo |
|---|---|
| Agregar problema nuevo | Crear `*.cpp` en cualquier carpeta, `CMakeLists.txt` ya hace `GLOB_RECURSE` y crea el target solo |
| Recargar CMake | `File > Reload CMake Project` después de crear archivo |
| Elegir ejecutable | Arriba a la derecha, dropdown de targets → elige `sol` |
| Redirigir input | `Run > Edit Configurations > Redirect input from > in.txt` |
| Atajo correr | `Shift+F10` / Debug `Shift+F9` |
| Build carpeta | `cmake-build-debug/` (ignorado por git, no lo toques) |

## 7. Git mínimo

| Qué | Comando |
|---|---|
| Ver estado | `git status -sb` |
| Guardar avance | `git add . && git commit -m "feat: problema X"` |
| Ver historial | `git log --oneline -10` |
| Deshacer cambio | `git checkout -- archivo.cpp` |

## 8. Estructura recomendada

```
CodeForces/
  Templates/debug.h       # dbg()
  A_Templates/PlantillaGoat.cpp  # copia-pega para cada problema
  docs/setup_cp.md        # esta guía
  CSES/, Daily_2/, ...    # un .cpp por problema
  in.txt / out.txt        # temporales, NO commitear (agrega a .gitignore)
  gen.cpp / brute.cpp / stress.sh  # temporales por problema
```

## 9. Checklist pre-submit

1. Quitar `-DLOCAL` / `freopen` / `dbg` ruidoso (con `LOCAL` basta, no hace falta borrar).
2. Probar: sample `in.txt` + 1 caso borde (`n=1`, `n=max`, todo igual, vacío).
3. Compilar con `-Wall -Wextra` sin warnings.
4. `time ./sol < in.txt` < límite del juez.
5. Enviar solo el `.cpp`.
