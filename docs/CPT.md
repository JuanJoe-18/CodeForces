# Plan Maestro CPT · Campamento Intensivo

> **Periodo:** 25 de octubre – 6 de noviembre (13 días)  
> **Objetivo:** llegar al **7 de noviembre** con ritmo de competencia, precisión matemática y dominio táctico de tu notebook.

La guía sigue tus reglas de entrenamiento: **analogías físicas claras**, **desglose matemático riguroso** y **pseudocódigo limpio**, sin código en C++/Java/Python ni spoilers salvo que uses la clave `100`. Incluye referencias exactas a tu copia en español de **Halim (`ES.pdf`)**, **CPH (`CPH.pdf`)**, **CP-Algorithms**, **Codeforces**, **AtCoder** y **USACO**.

> **Paginación verificada:** `p.` indica el número impreso al pie de la página; `PDF`, el número que muestra el visor contando la portada como página 1. En **`ES.pdf`** (*Competitive Programming 3*, primera edición castellana de 2019), **PDF = p. + 38**. En **`CPH.pdf`** (*Competitive Programmer’s Handbook*, borrador del 19 de agosto de 2019), **PDF = p. + 10**. Las fuentes web se identifican aparte y no tienen paginación.

## Navegación

- [Cronograma táctico de 13 días](#fase-1-cronograma-táctico-de-13-días-25-oct--6-nov)
- [Módulo 1: DP de conteo y combinatoria](#módulo-1-dp-de-conteo-y-combinatoria-en-estados)
- [Módulo 2: DP de probabilidad y valor esperado](#módulo-2-dp-de-probabilidad-y-valor-esperado-ev)
- [Módulo 3: Bitmask DP, submáscaras y SOS DP](#módulo-3-bitmask-dp-iteración-de-submáscaras-y-sos-dp)
- [Módulo 4: Geometría computacional](#módulo-4-geometría-computacional-extra-hard)
- [Módulo 5: Grafos avanzados, conectividad y flujos](#módulo-5-grafos-avanzados-conectividad-y-flujos-de-red)
- [Módulo 6: Range Queries, DSU con Rollback y árboles](#módulo-6-range-queries-rq-dsu-con-rollback-y-árboles)
- [Verificación de concepto para el día 1](#verificación-de-concepto-para-arrancar-el-día-1)

> Haz clic en **Desplegar contenido** para abrir cada módulo.

---

## Fase 1: Cronograma Táctico de 13 Días (25 Oct – 6 Nov)

<details open>
<summary><strong>Mostrar u ocultar el cronograma</strong></summary>

- **Días 1–2 · 25–26 Oct — Bloque 1: DP de Conteo, Combinatoria e Inclusión-Exclusión**
  - **Lectura:** `ES.pdf` §3.5 (pp. 111–138; PDF 149–176), §5.4 (pp. 244–251; PDF 282–289) y §§8.3.5–8.3.6 (pp. 373–377; PDF 411–415). Para Inclusión-Exclusión: `CPH.pdf` §22.3 (pp. 212–213; PDF 222–223).
  - **Enfoque:** representación canónica para evitar doble conteo, inversión de estados y DP sobre DAGs implícitos (con y sin obstáculos).

- **Días 3–4 · 27–28 Oct — Bloque 2: DP de Probabilidad, Valor Esperado y Ciclos**
  - **Lectura:** `ES.pdf` §5.6 (pp. 265–266; PDF 303–304), §5.8.1 (pp. 270–271; PDF 308–309) y §9.9 —eliminación gaussiana— (pp. 404–406; PDF 442–444); `CPH.pdf` §§24.1–24.4 (pp. 225–231; PDF 235–241).
  - **Enfoque:** Push DP para probabilidades hacia adelante, Pull DP para Valor Esperado hacia atrás, eliminación algebraica de auto-ciclos (self-loops) y Linealidad del Valor Esperado.

- **Días 5–6 · 29–30 Oct — Bloque 3: DP con Máscaras de Bits, Submáscaras y SOS DP**
  - **Lectura:** `ES.pdf` §8.2.1 (pp. 354–358; PDF 392–396) y §8.3.1 (pp. 369–370; PDF 407–408); `CPH.pdf` §10.5 (pp. 102–106; PDF 112–116). Para SOS DP: USACO Guide (web, sin paginación).
  - **Enfoque:** transiciones de permutación a subconjunto ($O(N 2^N)$), enumeración de submáscaras ($O(3^N)$) y Sum Over Subsets (SOS DP) para evitar TLE en consultas de superconjuntos/subconjuntos.

- **Días 7–8 · 31 Oct–1 Nov — Bloque 4: Geometría Computacional Extra-Hard**
  - **Lectura:** `ES.pdf` §§7.2.1–7.2.3 (pp. 321–330; PDF 359–368) y §§7.3.1–7.3.7 (pp. 338–348; PDF 376–386); `CPH.pdf` §30.3 (pp. 278–280; PDF 288–290). Para HPI y Sumas de Minkowski: CP-Algorithms (web, sin paginación).
  - **Enfoque:** ordenamiento radial exacto sin pérdida de precisión, Barrido Radial (Angular Sweep), Intersección de Semiplanos (HPI en $O(N \log N)$), Sumas de Minkowski y DP sobre Envolvente Convexa.

- **Días 9–10 · 2–3 Nov — Bloque 5: Grafos Avanzados, Puentes/Articulación, SCC, 2-SAT y Flujos**
  - **Lectura base:** `ES.pdf` §§4.2.8–4.2.9 (pp. 154–162; PDF 192–200), §4.6 (pp. 193–202; PDF 231–240) y §4.7.4 (pp. 215–222; PDF 253–260).
  - **Lectura avanzada:** `ES.pdf` §9.1 —2-SAT— (pp. 394–395; PDF 432–433), §9.7 —Dinic— (pp. 402–403; PDF 440–441), §9.12 —Hopcroft-Karp— (pp. 412–413; PDF 450–451) y §§9.23–9.24 —MCMF y cobertura de caminos en DAG— (pp. 430–432; PDF 468–470).
  - **Enfoque:** Árbol DFS (puentes y puntos de articulación), condensación de grafos dirigidos (SCC), modelado táctico de Flujo Máximo / Corte Mínimo (Dinic), Emparejamiento Bipartito (Kuhn/Hopcroft-Karp) y Min-Cost Max-Flow.

- **Días 11–12 · 4–5 Nov — Bloque 6: Range Queries (RQ), DSU Avanzado y Árboles**
  - **Lectura:** `ES.pdf` §§2.4.2–2.4.4 (pp. 61–75; PDF 99–113) y §9.18 —LCA— (pp. 419–421; PDF 457–459); `CPH.pdf` §28.1 —Lazy Propagation— (pp. 258–260; PDF 268–270) y §§18.1–18.4 (pp. 163–172; PDF 173–182). Para DSU con Rollback, HLD y Centroides: CP-Algorithms (web, sin paginación).
  - **Enfoque:** Segment Tree con Lazy Propagation, barrido offline con Fenwick/SegTree, DSU con Rollback (conectividad dinámica offline) y descomposición en árboles (LCA / HLD / Centroides).

- **Día 13 · 6 Nov — Bloque 7: Simulacro General, Repaso de Notebook y Descanso Mental**
  - **Enfoque:** revisión de casos borde (overflow, EPS en geometría, grafos desconectados, $N=1$), repaso rápido de plantillas del notebook y descanso temprano antes del día D (7 de noviembre).

</details>

---

## Módulo 1: DP de Conteo y Combinatoria en Estados

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §3.5 y §§3.5.1–3.5.3 — Programación Dinámica y ejemplos | 111–138 | PDF 149–176 |
| `ES.pdf` | §4.7.1 — Grafo Acíclico Dirigido (DAG) | 203–211 | PDF 241–249 |
| `ES.pdf` | §4.7.1 — Conteo de caminos en DAG y ejemplo UVa `10943` | 206–207 y 211 | PDF 244–245 y 249 |
| `ES.pdf` | §5.4 y §§5.4.1–5.4.4 — Combinatoria, coeficientes binomiales y Catalan | 244–251 | PDF 282–289 |
| `ES.pdf` | §§8.3.5–8.3.6 — Representación de estados y eliminación de parámetros redundantes | 373–377 | PDF 411–415 |
| `CPH.pdf` | §7.3 — *Paths in a Grid*; §7.6 — *Counting Tilings* | 71–72 y 75–76 | PDF 81–82 y 85–86 |
| `CPH.pdf` | §22.1 — *Binomial Coefficients* | 208–209 | PDF 218–219 |
| `CPH.pdf` | §22.3 — *Inclusion-Exclusion* | 212–213 | PDF 222–223 |

**Complementos web (sin paginación):** CP-Algorithms — *Binomial Coefficients*, *Inclusion-Exclusion Principle* y *Dynamic Programming on Broken Profile*.

> **Corrección de cobertura:** la Inclusión-Exclusión tiene como referencia específica `CPH.pdf` §22.3; no se atribuye a Halim §5.4.

### 2. Analogía del Mundo Real

Imagina que quieres contar de cuántas formas puedes llegar caminando desde la esquina noroeste de una ciudad cuadriculada hasta la esquina sureste, pero hay **baches gigantes** en ciertas intersecciones. Si la ciudad mide $100,000 \times 100,000$ calles, es imposible dibujar un mapa completo de toda la ciudad en tu libreta (te quedarías sin hojas — *Memory Limit Exceeded*). Sin embargo, si solo hay $2,000$ baches, puedes usar el **método del detective**: calculas todos los caminos posibles como si la ciudad fuera perfecta usando una fórmula directa de combinatoria, y luego **restas** únicamente los caminos que pisan algún bache, clasificándolos según cuál fue el **primer bache** que pisaron para jamás restar el mismo camino dos veces.

### 3. Rigor Matemático

1. **Regla de la Biyección / Primer Fallo Canónico (Evitar Doble Conteo):**
   Cuando cuentas objetos válidos restando los inválidos del total:

$$\text{Válidos}(u) = \text{Total}(u) - \sum_{v \prec u} \text{Válidos}(v) \times \text{Caminos}(v \to u)$$



Donde $v \prec u$ significa que $v$ puede alcanzar a $u$. Al exigir que $v$ sea el **primer** obstáculo visitado (usando $\text{Válidos}(v)$ en lugar de $\text{Total}(v)$), particionas el conjunto de caminos inválidos en subconjuntos mutuamente excluyentes.
2. **Transiciones con Inserción Combinatoria:**
   Al construir permutaciones o secuencias válidas insertando grupos de elementos iguales, si tienes un estado con $i$ elementos ya ordenados y quieres insertar $k$ elementos nuevos, el número de formas de intercalarlos manteniendo su orden relativo es:

$$\binom{i + k}{k} = \frac{(i+k)!}{i! \, k!}$$



### 4. Pseudocódigo Paso a Paso (DP de Conteo con Primer Obstáculo)

```text
FUNCION contar_caminos_sin_obstaculos(H, W, lista_obstaculos):
    Agregar el destino final (H, W) al final de lista_obstaculos
    Ordenar lista_obstaculos por coordenada (fila, columna) ascendente
    M = tamaño de lista_obstaculos

    PARA i desde 0 hasta M - 1:
        (f_i, c_i) = lista_obstaculos[i]
        // Total de caminos desde (1, 1) hasta (f_i, c_i) sin importar obstáculos
        DP[i] = Combinatoria((f_i - 1) + (c_i - 1), f_i - 1)

        // Restar caminos que chocaron por PRIMERA vez en un obstáculo previo j
        PARA j desde 0 hasta i - 1:
            (f_j, c_j) = lista_obstaculos[j]
            SI f_j <= f_i Y c_j <= c_i:
                caminos_entre_j_e_i = Combinatoria((f_i - f_j) + (c_i - c_j), f_i - f_j)
                DP[i] = (DP[i] - DP[j] * caminos_entre_j_e_i) MOD P

    RETORNAR DP[M - 1]

```

### 5. Batería de Ejercicios (Módulo 1)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **How do you add?** | UVa `10943` (Halim 3.5) | DP de conteo base / Barras y estrellas ($\binom{N+K-1}{K-1}$). |
| **Tiling Dominoes** | UVa `11270` (Halim 8.3) | DP de conteo con perfil quebrado (Broken Profile). |
| **Grid 2** | AtCoder DP `Y` | DP sobre coordenadas comprimidas + sustracción por primer obstáculo. |
| **Permutation** | AtCoder DP `T` | DP de conteo de permutaciones usando rangos relativos en $O(N^2)$ con sumas prefijas. |
| **Marbles** | Codeforces / USACO Gold | Conteo con inversión de parámetros (meter el valor en el estado y minimizar el índice). |
| **Cow Poetry** | USACO Gold (Jan 2019) | Conteo estilo mochila + exponenciación rápida sobre clases de equivalencia. |

</details>

---

## Módulo 2: DP de Probabilidad y Valor Esperado (EV)

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §5.6 — Teoría de probabilidad | 265–266 | PDF 303–304 |
| `ES.pdf` | §5.8.1 — Árbol de decisión | 270–271 | PDF 308–309 |
| `ES.pdf` | §8.3.6 — Abandono de un parámetro recuperable | 374–377 | PDF 412–415 |
| `ES.pdf` | §9.9 — Algoritmo de eliminación gaussiana | 404–406 | PDF 442–444 |
| `CPH.pdf` | §§24.1–24.2 — *Calculation* y *Events* | 225–227 | PDF 235–237 |
| `CPH.pdf` | §24.3 — *Random Variables*: valor esperado y linealidad | 228–229 | PDF 238–239 |
| `CPH.pdf` | §24.4 — *Markov Chains* | 230–231 | PDF 240–241 |

### 2. Analogía del Mundo Real

* **Probabilidad (Push hacia adelante):** Imagina que viertes $1$ litro de agua en la cima de una pirámide de canales. En cada bifurcación, el agua se divide según el ancho de cada tubería. Para saber cuánta agua llega a un depósito inferior, simplemente empujas el agua que tienes en el nivel actual hacia los niveles de abajo.
* **Valor Esperado (Pull hacia atrás):** Imagina que quieres saber cuánto dinero en promedio te costará salir de un laberinto de peajes. En la puerta de salida el costo restante es $\$0$. Si retrocedes un cuarto, el costo esperado desde ahí es el peaje de la puerta que acabas de cruzar **más** el promedio ponderado del costo de los cuartos a los que esa puerta te puede llevar.

### 3. Rigor Matemático

1. **Linealidad del Valor Esperado (El arma secreta contra el TLE):**
   Para cualquier conjunto de variables aleatorias $X_1, X_2, \dots, X_n$ (**incluso si NO son independientes**):

$$E\left[\sum_{i=1}^n X_i\right] = \sum_{i=1}^n E[X_i]$$



Si defines $I_i \in \{0, 1\}$ como una **variable indicadora** que vale $1$ si ocurre el evento $i$ y $0$ si no, entonces $E[I_i] = P(\text{evento } i \text{ ocurre})$. ¡Esto transforma un problema de DP global imposible en sumar las probabilidades individuales de piezas pequeñas!
2. **Eliminación de Ciclos de Longitud $>1$ (Gauss-Jordan vs. Despeje Directo):**
* Si el grafo de estados tiene **auto-lazos** ($u \to u$ con probabilidad $p_{uu}$), despejas directamente dividiendo entre $(1 - p_{uu})$.
* Si un componente fuertemente conexo de estados tiene tamaño $K \le 100$ sin orden topológico posible (como una caminata aleatoria en un grafo general), planteas el sistema lineal $E[u] - \sum_{v} P(u \to v) E[v] = C(u)$ y lo resuelves en $O(K^3)$ mediante **Eliminación Gaussiana**.



### 4. Pseudocódigo Paso a Paso (EV con Maximización de Decisiones / Juegos)

Cuando el problema dice *"tiras un dado / ocurre un evento aleatorio, y luego tú eliges la mejor acción"*:

```text
FUNCION valor_esperado_optimo(estado_u):
    SI estado_u es terminal:
        RETORNAR 0.0
    SI visitado[estado_u]:
        RETORNAR memo[estado_u]

    acumulador_esperado = 0.0
    PARA cada evento_aleatorio r con probabilidad P(r):
        // Una vez que la suerte decide 'r', el jugador toma la decisión óptima
        mejor_decision = -INFINITO
        PARA cada accion_valida a disponible tras salir r:
            estado_v = transicion(estado_u, r, a)
            costo_o_ganancia = recompensa(estado_u, r, a) + valor_esperado_optimo(estado_v)
            mejor_decision = MAX(mejor_decision, costo_o_ganancia)

        acumulador_esperado += P(r) * mejor_decision

    visitado[estado_u] = VERDADERO
    memo[estado_u] = acumulador_esperado
    RETORNAR acumulador_esperado

```

### 5. Batería de Ejercicios (Módulo 2)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **Coins** | AtCoder DP `I` | DP de probabilidad pura ($O(N^2)$), reduciendo el conteo de caras/cruces. |
| **Sushi** | AtCoder DP `J` | EV hacia atrás con eliminación algebraica de auto-lazos y reducción de dimensión. |
| **Cows and Primitive Roots / Dice** | UVa `10759` / `10491` (Halim 5.6) | Fundamentos de espacio muestral y DP de probabilidad en etapas. |
| **Bad Luck Island** | Codeforces `540D` | DP 3D de probabilidad con colisiones del mismo tipo (auto-lazos condicionales). |
| **Bag of Mice** | Codeforces `148D` | Probabilidad condicional por turnos con estados que desaparecen. |
| **Little Pony and Expected Maximum** | Codeforces `453A` | Valor esperado sin DP usando diferencias de probabilidades acumuladas: $P(\max \le m) = (m/M)^N$. |
| **Wet Shark and Flowers** | Codeforces `621C` | Linealidad del Valor Esperado sobre pares adyacentes en un anillo. |
| **Journey** | Codeforces `839C` | Valor esperado de longitud de camino en un árbol (DFS simple). |

</details>

---

## Módulo 3: Bitmask DP, Iteración de Submáscaras y SOS DP

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §8.2.1 — *Backtracking* con máscara de bits | 354–358 | PDF 392–396 |
| `ES.pdf` | §8.3.1 — DP con máscara de bits | 369–370 | PDF 407–408 |
| `CPH.pdf` | §§10.1–10.3 — Representación, operaciones y conjuntos con bits | 95–99 | PDF 105–109 |
| `CPH.pdf` | §10.5 — *Dynamic Programming* con bits | 102–106 | PDF 112–116 |

**Complementos web (sin paginación):** USACO Guide — *Bitmask DP* y *Sum Over Subsets (SOS) DP*.

> **Cobertura:** SOS DP no tiene una sección propia en `ES.pdf` ni en `CPH.pdf`; por eso se consulta como recurso web y no se le asignan páginas de los libros.

### 2. Analogía del Mundo Real

Imagina que tienes $20$ ingredientes de cocina y quieres saber para cada combinación posible de ingredientes (representada como un interruptor encendido `1` o apagado `0` en un panel de $20$ botones) cuántas recetas del recetario puedes preparar usando **únicamente un subconjunto** de los ingredientes que tienes en la mesa.

* Si para cada combinación revisas todas las demás combinaciones posibles una por una, tardarás $(2^{20}) \times (2^{20}) \approx 10^{12}$ pasos (imposible).
* Si solo revisas las sub-combinaciones que tienen prendidos los botones de tu mano (**Iteración de Submáscaras**), tardarás $3^{20} \approx 3.4 \times 10^9$ pasos (aún muy lento para $N=20$, aunque perfecto para $N \le 15$).
* **SOS DP** hace magia: agrupa las recetas decidiendo ingrediente por ingrediente (primero el ingrediente 1, luego el 2, hasta el 20). En apenas $20 \times 2^{20} \approx 2 \times 10^7$ operaciones tienes la respuesta exacta para todas las combinaciones posibles.

### 3. Rigor Matemático

1. **Complejidad de Iterar Submáscaras ($O(3^N)$):**
   Por el Teorema del Binomio, si para cada máscara de tamaño $k$ de bits encendidos iteras sobre sus $2^k$ submáscaras:

$$\sum_{k=0}^N \binom{N}{k} 2^k = (1 + 2)^N = 3^N$$



*(Regla de oro: Usa `sub = (sub - 1) & mask` para $N \le 15$; usa **SOS DP** para $16 \le N \le 22$).*
2. **Recurrencia de SOS DP ($O(N 2^N)$):**
   Definimos $DP(\text{mask}, i)$ como la suma de $A[\text{sub}]$ para todas las submáscaras $\text{sub} \subseteq \text{mask}$ que solo pueden diferir de $\text{mask}$ en los primeros $i$ bits ($0 \dots i$):
* Si el bit $i$ de $\text{mask}$ está **apagado** ($0$): el bit $i$ de $\text{sub}$ también debe ser $0$, así que $DP(\text{mask}, i) = DP(\text{mask}, i-1)$.
* Si el bit $i$ de $\text{mask}$ está **encendido** ($1$): el bit $i$ de $\text{sub}$ puede ser $1$ o $0$, así que sumamos ambas ramas:

$$DP(\text{mask}, i) = DP(\text{mask}, i-1) + DP(\text{mask} \oplus 2^i, i-1)$$





### 4. Pseudocódigo Paso a Paso (SOS DP en Memoria 1D In-Place)

```text
FUNCION calcular_SOS_DP(N, arreglo_A):
    // Copiar valores iniciales
    PARA mask desde 0 hasta (2^N) - 1:
        F[mask] = arreglo_A[mask]

    // Iterar bit por bit (el ciclo externo DEBE ser el bit i)
    PARA i desde 0 hasta N - 1:
        PARA mask desde 0 hasta (2^N) - 1:
            SI el bit i de mask está ENCENDIDO:
                mascara_sin_bit_i = mask XOR (2^i)
                F[mask] = F[mask] + F[mascara_sin_bit_i]

    RETORNAR F

```

### 5. Batería de Ejercicios (Módulo 3)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **Forming Quiz Teams** | UVa `10911` (Halim 8.3.1) | El problema canónico de Halim para emparejamiento mínimo con Bitmask DP ($N \le 8$ pares). |
| **Matching** | AtCoder DP `O` | Conteo de emparejamientos bipartitos perfectos en $O(N 2^N)$ eliminando el parámetro del índice por `popcount`. |
| **Grouping** | AtCoder DP `U` | Partición de conjunto en cliques con iteración de submáscaras en $O(3^N)$. |
| **Compatible Numbers** | Codeforces `165E` | Aplicación directa de SOS DP para encontrar máscara complementaria ($\text{mask} \ \& \ x = 0$). |
| **Vowels** | Codeforces `383E` | SOS DP combinada con el Principio de Inclusión-Exclusión ($N = 24$). |
| **Guard Mark** | USACO Gold (Dec 2014) | Bitmask DP optimizando cuello de botella de estabilidad. |

</details>

---

## Módulo 4: Geometría Computacional Extra-Hard

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §§7.2.1–7.2.2 — Puntos, vectores, líneas y producto cruz | 321–328 | PDF 359–366 |
| `ES.pdf` | §7.2.3 — Círculos | 329–330 | PDF 367–368 |
| `ES.pdf` | §§7.3.1–7.3.5 — Polígonos: representación, perímetro, área, convexidad y punto interior | 338–341 | PDF 376–379 |
| `ES.pdf` | §7.3.6 — Corte de un polígono con `cutPolygon` | 342–343 | PDF 380–381 |
| `ES.pdf` | §7.3.7 — Envolvente convexa mediante el método de Graham | 343–348 | PDF 381–386 |
| `CPH.pdf` | Cap. 29 y §§29.1–29.4 — Geometría, puntos, líneas, área y distancias | 265–274 | PDF 275–284 |
| `CPH.pdf` | §30.3 — *Convex Hull Problem* | 278–280 | PDF 288–290 |

**Complementos web (sin paginación):** CP-Algorithms — *Half-plane intersection*, *Minkowski sum of convex polygons*, *Tangents to two circles* y *Pick’s Theorem*.

> **Cobertura:** el comparador radial entero, HPI y la Suma de Minkowski son extensiones externas; no debes buscarlos como secciones propias dentro del capítulo 7 de Halim.

### 2. Analogía del Mundo Real

* **Ordenamiento Radial Exacto (Sin `atan2`):** Imagina un reloj en la pared. Si intentas ordenar manecillas midiendo sus grados con un transportador escolar (`atan2` en punto flotante), dos manecillas casi encimadas a $10^9$ metros de distancia parecerán iguales por error de redondeo. En cambio, si primero separas las manecillas que apuntan a la **mitad superior** del reloj (de las 9:00 a las 3:00 pasando por las 12) de las que apuntan a la **mitad inferior**, dentro de cada mitad puedes saber cuál va antes usando únicamente multiplicaciones enteras (el **producto cruz**), ¡con precisión infinita!
* **Intersección de Semiplanos (HPI):** Imagina que tienes una hoja de papel infinita y varios cortes de guillotina rectos. Cada corte elimina todo el papel que queda a su derecha y conserva solo lo que queda a su izquierda. En lugar de recortar el polígono entero una y otra vez en $O(N^2)$ como en Halim `7.3.6`, ordenas los cortes por el ángulo de la guillotina y vas envolviendo la región sobreviviente en una cola de doble extremo (`deque`) en $O(N \log N)$.

### 3. Rigor Matemático

1. **Predicado de Orden Radial Exacto ($360^\circ$ en Enteros de 64 bits):**
   Definimos la función hemisferio $H(p)$ para un vector $p = (x, y) \neq (0, 0)$:

$$H(p) = \begin{cases} 0 & \text{si } y > 0 \text{ o } (y = 0 \text{ y } x > 0) \quad (\text{ángulos en } [0, \pi)) \\ 1 & \text{si } y < 0 \text{ o } (y = 0 \text{ y } x < 0) \quad (\text{ángulos en } [\pi, 2\pi)) \end{cases}$$



Entonces, el vector $u$ va **antes** que $v$ en orden antihorario si y solo si:

$$H(u) < H(v) \quad \lor \quad \big(H(u) = H(v) \land (u \times v > 0)\big)$$



Donde $u \times v = u_x v_y - u_y v_x$. Cero trigonometría, cero errores de precisión.
2. **Condición de Redundancia en Intersección de Semiplanos (HPI):**
   Un semiplano dirigido se define por un punto $P$ y un vector director $D$ (la región válida está a la izquierda: $D \times (X - P) \ge 0$). Al insertar un nuevo semiplano $L_{\text{nuevo}}$ en el `deque` ordenado por ángulo polar, el último semiplano del `deque` ($L_{\text{top}}$) se vuelve **redundante** (y debe eliminarse) si el punto de intersección entre $L_{\text{top}}$ y $L_{\text{penúltimo}}$ cae **fuera** (a la derecha) de $L_{\text{nuevo}}$:

$$D_{\text{nuevo}} \times \big(\text{Interseccion}(L_{\text{top}}, L_{\text{penúltimo}}) - P_{\text{nuevo}}\big) < -\epsilon$$


3. **Suma de Minkowski de dos Polígonos Convexos $A \oplus B$:**

$$A \oplus B = \{a + b \mid a \in A, b \in B\}$$



Propiedad táctica clave: **Dos polígonos convexos $A$ y $B$ se intersectan si y solo si el origen $(0,0)$ pertenece a la suma de Minkowski $A \oplus (-B)$**. Además, la distancia mínima entre $A$ y $B$ es la distancia desde $(0,0)$ al borde de $A \oplus (-B)$.

### 4. Pseudocódigo Paso a Paso (Intersección de Semiplanos en $O(N \log N)$)

```text
FUNCION interseccion_semiplanos(lista_semiplanos):
    Agregar 4 semiplanos de una "Caja Infinita" [-INF, INF] x [-INF, INF]
    Ordenar lista_semiplanos por ángulo polar usando H(D) y producto cruz
    Crear un deque vacío Q

    PARA cada semiplano L en lista_semiplanos:
        // 1. Eliminar del final de Q los semiplanos cuyo vértice quede FUERA de L
        MIENTRAS tamaño(Q) >= 2 Y interseccion(Q.ultimo, Q.penultimo) está a la DERECHA de L:
            Q.quitar_ultimo()

        // 2. Eliminar del inicio de Q los semiplanos cuyo vértice quede FUERA de L
        MIENTRAS tamaño(Q) >= 2 Y interseccion(Q.primero, Q.segundo) está a la DERECHA de L:
            Q.quitar_primero()

        // 3. Manejo de semiplanos paralelos con misma dirección
        SI Q no está vacío Y L es paralelo con igual sentido que Q.ultimo:
            SI el origen de L está más a la izquierda (es más restrictivo) que Q.ultimo:
                Q.quitar_ultimo()
            SINO:
                CONTINUAR al siguiente L

        Q.agregar_al_final(L)

    // 4. Cerrar el ciclo entre el final y el inicio del deque
    MIENTRAS tamaño(Q) >= 3 Y interseccion(Q.ultimo, Q.penultimo) está a la DERECHA de Q.primero:
        Q.quitar_ultimo()
    MIENTRAS tamaño(Q) >= 3 Y interseccion(Q.primero, Q.segundo) está a la DERECHA de Q.ultimo:
        Q.quitar_primero()

    SI tamaño(Q) < 3:
        RETORNAR Polígono Vacío (Infactible)
    RETORNAR intersecciones de semiplanos adyacentes en Q

```

### 5. Batería de Ejercicios (Módulo 4)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **Polygon Cutting / Triathlon** | UVa `10084` / `11168` (Halim 7.3.6) | Corte de polígonos y distancia promedio de puntos a una envolvente convexa. |
| **Runaway to a Shadow** | Codeforces `681E` | Geometría de círculos, tangentes, ley de cosenos y unión de intervalos angulares. |
| **Point Ordering / Radial Sweep** | Codeforces `598C` / AtCoder `ABC139 F` | Ordenamiento radial exacto por hemisferios y ventana deslizante angular ($360^\circ$). |
| **Jungle Outpost** | POJ `3525` / ICPC | Búsqueda binaria sobre la respuesta + factibilidad con Intersección de Semiplanos (HPI). |
| **Clever Fat Rat / Guarding Art** | ICPC / Codeforces `1099F` (Geo) | Núcleo de un polígono (Star-shaped polygon kernel) mediante HPI. |
| **Geppetto / Minkowski** | Codeforces `87E` | Suma de Minkowski de 3 polígonos convexos + consulta de punto en polígono en $O(\log N)$. |

</details>

---

## Módulo 5: Grafos Avanzados, Conectividad y Flujos de Red

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

**Base en Halim**

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §4.2.8 — Puntos de articulación y puentes | 154–157 | PDF 192–195 |
| `ES.pdf` | §4.2.9 — Componentes fuertemente conexos mediante Tarjan | 158–162 | PDF 196–200 |
| `ES.pdf` | §§4.6.1–4.6.3 — Ford-Fulkerson y Edmonds-Karp; §§4.6.4–4.6.6 — Modelado y aplicaciones | 193–202 | PDF 231–240 |
| `ES.pdf` | §4.7.4 — Grafo bipartito: emparejamiento, MVC y MIS | 215–222 | PDF 253–260 |

**Algoritmos avanzados en el capítulo 9 de Halim**

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §9.1 — Problema 2-SAT | 394–395 | PDF 432–433 |
| `ES.pdf` | §9.7 — Algoritmo de Dinic | 402–403 | PDF 440–441 |
| `ES.pdf` | §9.12 — Algoritmo de Hopcroft-Karp | 412–413 | PDF 450–451 |
| `ES.pdf` | §9.17 — Algoritmo de Kosaraju | 417–418 | PDF 455–456 |
| `ES.pdf` | §9.23 — Flujo (máximo) de coste mínimo | 430–431 | PDF 468–469 |
| `ES.pdf` | §9.24 — Cobertura mínima de caminos en un DAG | 431–432 | PDF 469–470 |

**Complemento en CPH**

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `CPH.pdf` | §§17.1–17.2 — Kosaraju y 2-SAT | 157–162 | PDF 167–172 |
| `CPH.pdf` | §§20.1–20.4 — Flujos, cortes, emparejamientos y coberturas de caminos | 181–194 | PDF 191–204 |

**Complementos web (sin paginación):** CP-Algorithms — puentes y puntos de articulación, *Block-Cut Tree*, 2-SAT, Dinic, *Minimum-Cost Flow* y modelado de *Max Flow / Min Cut*.

### 2. Analogía del Mundo Real (Modelado de Corte Mínimo / Proyecto con Dependencias)

Imagina que puedes elegir varios negocios rentables (con ganancia $+G_i$), pero cada negocio te exige comprar ciertas máquinas costosas (con costo $-C_j$). Una misma máquina puede servir para varios negocios.
¿Cómo decides qué negocios abrir para ganar lo máximo posible?
En lugar de hacer una búsqueda exponencial, construyes un sistema de tuberías desde una fuente $S$ hasta un sumidero $T$:

* Conectas $S$ a cada negocio con una tubería de capacidad $G_i$.
* Conectas cada máquina a $T$ con una tubería de capacidad $C_j$.
* Si el negocio $i$ requiere la máquina $j$, pones una tubería **indestructible (capacidad $\infty$)** de $i$ a $j$.
  Cortar una tubería desde $S$ significa **"renunciar a la ganancia $G_i$"**. Cortar una tubería hacia $T$ significa **"pagar el costo $C_j$ de la máquina"**. ¡El **Corte Mínimo (que por teorema es igual al Flujo Máximo)** encuentra automáticamente la menor pérdida posible!

### 3. Rigor Matemático y Diccionario de Modelado Táctico

1. **Teorema de König (En Grafos Bipartitos — Halim 4.7.4):**
* **Minimum Vertex Cover (MVC):** $\text{MVC} = \text{Max Matching (MCBM)}$.
* **Maximum Independent Set (MIS):** $\text{MIS} = \vert{}V\vert{} - \text{Max Matching (MCBM)}$.


2. **Teorema de Dilworth (Cadenas y Anticadenas en DAGs):**
   El número mínimo de caminos disjuntos en vértices que cubren un DAG es igual a $N - \text{Max Matching}$ en su grafo bipartito duplicado $(u_{\text{out}} \to v_{\text{in}})$.
3. **Complejidad de Dinic:**
* En redes generales: $O(V^2 E)$.
* En redes unitarias (Bipartite Matching): **$O(E \sqrt{V})$** (nunca dará TLE hasta $V, E \le 10^5$).


4. **Condición de Puente y Punto de Articulación (Tarjan — Halim 4.2.8):**
* Arista $(u, v)$ es **Puente** $\iff \text{low}[v] > \text{tin}[u]$.
* Vértice $u$ (no raíz) es **Articulación** $\iff \exists v \text{ hijo en DFS tal que } \text{low}[v] \ge \text{tin}[u]$.



### 4. Pseudocódigo Paso a Paso (Plantilla de Modelado de Closure / Ganancia Máxima)

```text
FUNCION maxima_ganancia_con_dependencias(ganancias_proyectos, costos_maquinas, dependencias):
    Crear red de flujo con Fuente S y Sumidero T
    suma_ganancias_positivas = 0

    PARA cada proyecto i con ganancia G_i > 0:
        suma_ganancias_positivas += G_i
        Agregar_Arista(S -> proyecto_i, capacidad = G_i)

    PARA cada maquina j con costo C_j > 0:
        Agregar_Arista(maquina_j -> T, capacidad = C_j)

    PARA cada par (proyecto_i requiere maquina_j) en dependencias:
        // Capacidad INFINITO impide que el corte mínimo rompa una dependencia lógica
        Agregar_Arista(proyecto_i -> maquina_j, capacidad = INFINITO)

    perdida_minima = Flujo_Maximo_Dinic(S, T)
    RETORNAR suma_ganancias_positivas - perdida_minima

```

### 5. Batería de Ejercicios (Módulo 5)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **Critical Links / Network** | UVa `796` / `315` (Halim 4.2.8) | Extracción directa de puentes y puntos de articulación. |
| **Software Allocation** | UVa `259` (Halim 4.6) | Modelado clásico de flujo máximo de asignación. |
| **Tourist Guide / King's Quest** | CSES `1696` / `1709` | Matching bipartito + reconstrucción del Minimum Vertex Cover (Teorema de König). |
| **Simple Polygon / Petya and Graph** | Codeforces `1082G` | Modelado clásico de Maximum Weight Closure (ganancia de aristas vs. costo de nodos) con Min-Cut. |
| **Bertown Roads** | Codeforces `118E` | Orientar aristas de un grafo no dirigido para hacerlo fuertemente conexo usando el árbol DFS y puentes. |
| **Giant Pizza** | CSES `1684` | Implementación limpia de **2-SAT** usando condensación de SCCs de Tarjan/Kosaraju. |

</details>

---

## Módulo 6: Range Queries (RQ), DSU con Rollback y Árboles

<details>
<summary><strong>Desplegar contenido</strong> · Teoría, analogía, matemáticas, pseudocódigo y ejercicios</summary>

### 1. Referencias Teóricas

| Fuente | Sección exacta y contenido | Páginas impresas | Páginas en el visor |
| --- | --- | --- | --- |
| `ES.pdf` | §2.4.2 — Conjuntos disjuntos para unión-buscar (DSU) | 61–64 | PDF 99–102 |
| `ES.pdf` | §2.4.3 — Árbol de segmentos básico | 65–69 | PDF 103–107 |
| `ES.pdf` | §2.4.4 — Árbol de Fenwick (BIT) | 70–75 | PDF 108–113 |
| `ES.pdf` | §9.18 — Ancestro común mínimo (LCA) mediante recorrido Euleriano y RMQ | 419–421 | PDF 457–459 |
| `CPH.pdf` | §9.2 — *Binary Indexed Tree* | 86–88 | PDF 96–98 |
| `CPH.pdf` | §9.3 — *Segment Tree* | 89–92 | PDF 99–102 |
| `CPH.pdf` | §28.1 — *Lazy Propagation* | 258–260 | PDF 268–270 |
| `CPH.pdf` | §§18.1–18.4 — Ancestros, subárboles, caminos, LCA y algoritmos offline | 163–172 | PDF 173–182 |

**Complementos web (sin paginación):** CP-Algorithms — *Segment Tree with Lazy Propagation*, *Deleting from a Data Structure in $O(T(n) \log n)$* (DSU con Rollback y Segment Tree sobre el tiempo), *Lowest Common Ancestor*, *Heavy-Light Decomposition* y *Centroid Decomposition*.

> **Cobertura:** para Lazy Propagation, la lectura guiada con páginas es `CPH.pdf` §28.1. DSU con Rollback, HLD y Centroid Decomposition quedan asignados a recursos web, no a secciones inexistentes de Halim.

### 2. Analogía del Mundo Real

* **Barrido Offline con Fenwick/Segment Tree:** Imagina que te hacen $200,000$ preguntas sobre un libro de historia: *"¿Cuántos personajes nacidos después de 1850 aparecen entre la página 10 y la página 80?"*. En lugar de releer las páginas 10 a 80 para cada pregunta, **ordenas todas las preguntas por la página final (página 80)** y vas leyendo el libro una sola vez de la página 1 a la última, marcando en una pizarra (tu Fenwick Tree) únicamente lo que ya pasó.
* **DSU con Rollback (Árbol de Segmentos en el Tiempo):** En un DSU normal, unir dos grupos es como mezclar pintura roja y azul: es casi imposible separarlas. Pero si **no usas compresión de caminos** (solo *unión por rango/tamaño*, que garantiza altura $\le \log_2 N$), cada unión solo cambia el padre de un nodo y el tamaño de otro. Puedes anotar ese único cambio en una pila de historial (`stack`) y presionar **"Ctrl + Z" (`rollback`)** en $O(1)$ exacto.

### 3. Rigor Matemático

1. **Invariante de Lazy Propagation (Composición de Operaciones Afines):**
   Si un nodo representa el intervalo $[L, R]$ de longitud $\text{len} = R - L + 1$ y soporta la operación $\text{Aplicar}(x \mapsto a \cdot x + b)$, al empujar un nuevo tag $(a_{\text{new}}, b_{\text{new}})$ sobre un nodo que ya tenía $(a_{\text{old}}, b_{\text{old}})$:

$$a_{\text{combinado}} = a_{\text{new}} \cdot a_{\text{old}}, \qquad b_{\text{combinado}} = a_{\text{new}} \cdot b_{\text{old}} + b_{\text{new}}$$


2. **Fórmula de Distancia y Caminos en Árboles con LCA:**

$$\text{dist}(u, v) = \text{depth}[u] + \text{depth}[v] - 2 \cdot \text{depth}[\text{LCA}(u, v)]$$



*(Truco táctico: Tres nodos $a, b, c$ en un árbol tienen un único punto de encuentro central dado por $\text{LCA}(a, b) \oplus \text{LCA}(b, c) \oplus \text{LCA}(a, c)$).*

### 4. Pseudocódigo Paso a Paso (DSU con Rollback para Conectividad Dinámica)

```text
ESTRUCTURA DSU_Rollback:
    padre[1..N], tamano[1..N]
    pila_historial = Pila vacía
    componentes = N

    FUNCION encontrar_raiz(u):
        // ¡PROHIBIDO usar compresión de caminos aquí! Solo subir por punteros
        MIENTRAS u != padre[u]:
            u = padre[u]
        RETORNAR u

    FUNCION unir(u, v):
        raiz_u = encontrar_raiz(u)
        raiz_v = encontrar_raiz(v)
        SI raiz_u == raiz_v:
            pila_historial.apilar(NINGUN_CAMBIO)
            RETORNAR FALSO

        // Unión por tamaño para garantizar altura <= log2(N)
        SI tamano[raiz_u] < tamano[raiz_v]:
            INTERCAMBIAR(raiz_u, raiz_v)

        pila_historial.apilar( (raiz_v, raiz_u, tamano[raiz_u]) )
        padre[raiz_v] = raiz_u
        tamano[raiz_u] += tamano[raiz_v]
        componentes -= 1
        RETORNAR VERDADERO

    FUNCION deshacer_ultimo_cambio(): // Ctrl + Z en O(1)
        registro = pila_historial.desapilar()
        SI registro != NINGUN_CAMBIO:
            (hijo, padre_antiguo, tamano_antiguo) = registro
            padre[hijo] = hijo
            tamano[padre_antiguo] = tamano_antiguo
            componentes += 1

```

### 5. Batería de Ejercicios (Módulo 6)

| Problema | Plataforma / ID | Enfoque Táctico |
| --- | --- | --- |
| **Ahoy, Pirates!** | UVa `11402` (Halim 2.4.3) | El problema jefe de Segment Tree con Lazy Propagation de Halim (set 0, set 1, flip). |
| **Potentiometers** | UVa `12086` (Halim 2.4.4) | Calentamiento de Fenwick Tree de alta velocidad. |
| **Distinct Values Queries** | CSES `1734` | Barrido Offline con Fenwick Tree guardando la última aparición de cada valor. |
| **Range Updates and Sums** | CSES `1735` | Lazy Propagation combinando asignación en rango y suma en rango. |
| **Dynamic Connectivity** | CSES `2133` / Codeforces `100551A` | Segment Tree sobre el tiempo + DSU con Rollback en $O(Q \log Q \log N)$. |
| **Cow Land** | USACO Gold (Feb 2019) | Consultas de XOR en caminos de un árbol con actualización de nodos (Euler Tour + Fenwick o HLD). |

</details>

---

## Verificación de Concepto para Arrancar el Día 1

Para inaugurar oficialmente este bloque de entrenamiento siguiendo nuestro protocolo paso a paso, volvamos a la pregunta que quedó abierta sobre **Sushi (AtCoder DP J)** y combinémosla con el **Módulo 1 y 2**:

En la ecuación de Valor Esperado de *Sushi*, el estado `E[c1][c2][c3]` depende de:

* `E[c1 - 1][c2][c3]`
* `E[c1 + 1][c2 - 1][c3]`
* `E[c1][c2 + 1][c3 - 1]`

Si escribes 3 ciclos `for` anidados para llenar la tabla de forma iterativa (Bottom-Up), **¿cuál de las tres variables (`c1`, `c2` o `c3`) tiene que ir obligatoriamente en el ciclo más externo (el primero de arriba) y cuál en el más interno para que nunca leas una casilla que aún no ha sido calculada?**