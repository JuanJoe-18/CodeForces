# Formalización Teórica de la Programación Dinámica mediante Autómatas Finitos y Grafos Acíclicos Dirigidos

## Resumen
Este documento establece una equivalencia formal e intuitiva entre la Programación Dinámica (DP), la Teoría de Autómatas Finitos Deterministas (DFA) y los Grafos Acíclicos Dirigidos (DAG). Se presenta un marco unificado que permite modelar problemas de optimización y conteo como la evaluación secuencial de transiciones sobre un espacio de estados finito.

---

# 1. Módulo 1: Formalización Teórica (DP como Autómatas y DAGs)

## 1.1. La 5-Tupla Formal de DP

Un problema de Programación Dinámica puede definirse rigurosamente como una 5-tupla $\mathcal{M} = (Q, \Sigma, \delta, q_0, F)$:

- **Espacio de Estados ($Q$):** El conjunto de subproblemas discretos. Representa la información histórica (memoria) mínima y suficiente requerida para tomar decisiones legales a futuro sin violar el principio de optimalidad de Bellman.
- **Alfabeto de Decisiones ($\Sigma$):** Un conjunto finito de decisiones o transiciones atómicas disponibles en cada paso del proceso.
- **Función de Transición ($\delta: Q \times \Sigma \to Q \cup \{\emptyset\}$):** Una regla determinista que computa el estado resultante de aplicar una decisión $a \in \Sigma$ desde un estado $q \in Q$, tal que $\delta(q, a) = q'$. Si la decisión $a$ infringe las restricciones del problema en el estado $q$, la función conmuta al estado nulo $\emptyset$ (transición inválida).
- **Estado Inicial ($q_0 \in Q$):** El caso base trivial del problema, desde el cual se inicia la propagación o reducción.
- **Conjunto de Estados Finales/Aceptación ($F \subseteq Q$):** El subconjunto de estados que denotan la resolución completa del problema global.

## 1.2. Modelado de la Red (De Autómata a DAG)

La evaluación secuencial de la función de transición $\delta$ sobre el espacio de estados $Q$ induce de manera natural un Grafo Acíclico Dirigido (DAG) $G = (V, E)$, siempre que el problema no contenga dependencias cíclicas (condición *sine qua non* de la DP).

- **Conjunto de Nodos o Vértices ($V$):** Corresponde biunívocamente al espacio de estados, $V = Q$.
- **Conjunto de Aristas Dirigidas ($E$):** Se define como $E = \{(u, v, w_a) \mid \exists a \in \Sigma \text{ tal que } \delta(u, a) = v\}$. El término $w_a$ denota el peso o costo escalar asociado a la decisión $a$.

La resolución del problema se reduce a computar ecuaciones de recurrencia de propagación sobre este DAG, asumiendo un ordenamiento topológico implícito o explícito:

- **Mínimo Costo (Camino Más Corto):**
  $$dp[v] = \min_{(u, v) \in E} (dp[u] + w(u, v)) \quad \text{con} \quad dp[q_0] = 0$$
- **Máximo Beneficio (Camino Más Largo):**
  $$dp[v] = \max_{(u, v) \in E} (dp[u] + w(u, v)) \quad \text{con} \quad dp[q_0] = 0$$
- **Conteo de Rutas (Conteo de Caminos):**
  $$dp[v] = \sum_{(u, v) \in E} dp[u] \quad \text{con} \quad dp[q_0] = 1$$

## 1.3. El Algoritmo Universal en 3 Preguntas

El diseño de cualquier modelo de Programación Dinámica puede sintetizarse en la resolución secuencial de tres interrogantes fundamentales:

1. **Eje de Avance:** ¿Qué variable escalar (o vector) cuantifica el progreso monótono hacia el conjunto de aceptación $F$? (p. ej., índice de un arreglo, suma acumulada, instante de tiempo, máscara de bits).
2. **Memoria Mínima:** ¿Cuál es la mínima suficiencia estadística requerida para dictaminar la legalidad de la transición $\delta(q, a)$ sin ambigüedades?
3. **Decisiones Legales:** ¿Qué subconjunto de aristas emana de un nodo dado $u \in V$ y qué invariantes o condiciones de contorno imponen sobre el sistema local?

## 1.4. Expansión de Estados: Permutaciones vs. Combinaciones (1D vs 2D)

Existe una dicotomía fundamental al modelar problemas de conteo de composiciones sobre un alfabeto $\Sigma = \{a_1, \dots, a_n\}$.

Cuando el estado unidimensional $s \in Q$ (p. ej., una suma objetivo) permite la transición iterativa sobre todo el alfabeto en cualquier paso, el sistema implícitamente computa **permutaciones** (el orden topológico se aplica únicamente sobre $s$). Matemáticamente, la sumatoria de caminos sobre el DAG distingue composiciones compuestas por los mismos elementos atómicos dispuestos en distinta secuencia.

Para computar **combinaciones** (donde el ordenamiento relativo de los elementos es irrelevante y las soluciones isomórficas deben ser unificadas), es imperativo expandir la dimensionalidad del espacio de estados bidimensionalmente: $Q' = \{0, \dots, n\} \times \{0, \dots, x\}$. Al introducir un índice discreto $i \in \{0, \dots, n\}$ que acota el prefijo del alfabeto permitido, se induce un orden topológico estricto sobre las decisiones. La función de transición $\delta((i, s), a)$ queda restringida a aristas ortogonales (no decrecientes respecto al eje $i$), colapsando así la multiplicidad multiplicativa y garantizando unicidad en el conteo.

---

# 2. Módulo 2: Desglose Formal de la Primera Tanda (CSES DP)

## 2.1. Dice Combinations

- **Definición Formal:**
  - $Q = \{0, 1, \dots, n\}$ (Suma acumulada de los lanzamientos).
  - $\Sigma = \{1, 2, 3, 4, 5, 6\}$ (Espectro de caras de un dado estándar).
  - $\delta(s, a) = s + a \quad \text{si } s + a \le n$, en caso contrario $\emptyset$. Costo $w_a = 0$.
  - $q_0 = 0$.
  - $F = \{n\}$.
- **Ecuación de Recurrencia:**
  $$dp[s] = \sum_{a=1}^{6} dp[s - a] \quad \text{para todo } s - a \ge 0, \text{ sujeto a } dp[0] = 1$$

## 2.2. Minimizing Coins

- **Definición Formal:**
  - $Q = \{0, 1, \dots, x\}$ (Valor residual objetivo para alcanzar el cambio).
  - $\Sigma = \{c_1, c_2, \dots, c_n\}$ (Denominaciones discretas disponibles en la economía).
  - $\delta(s, c_i) = s + c_i \quad \text{si } s + c_i \le x$, $\emptyset$ de lo contrario. El peso o costo transicional es siempre $w = 1$ (representa el uso de una moneda atómica).
  - $q_0 = 0$.
  - $F = \{x\}$.
- **Ecuación de Recurrencia:**
  $$dp[s] = \min_{c_i \in \Sigma} (dp[s - c_i] + 1) \quad \text{sujeto a } dp[0] = 0, \text{ y } dp[s] = \infty \text{ si } s < 0$$

## 2.3. Coin Combinations I

- **Definición Formal:** (Conteo de caminos en DAG 1D - Propagación no conmutativa o Permutaciones)
  - $Q = \{0, 1, \dots, x\}$.
  - $\Sigma = \{c_1, c_2, \dots, c_n\}$.
  - $\delta(s, c_i) = s + c_i \quad \text{si } s + c_i \le x$.
  - $q_0 = 0$.
  - $F = \{x\}$.
- **Ecuación de Recurrencia:**
  $$dp[s] = \sum_{c_i \in \Sigma} dp[s - c_i] \quad \text{sujeto a } dp[0] = 1, \text{ y } dp[s] = 0 \text{ si } s < 0$$

## 2.4. Coin Combinations II

- **Definición Formal:** (Conteo de caminos en DAG 2D - Expansión topológica para Combinaciones Únicas)
  - $Q = \{1, \dots, n\} \times \{0, \dots, x\}$ (Coordenada $i$: Subconjunto de prefijos de monedas disponibles; Coordenada $s$: Suma parcial procesada).
  - $\Sigma = \{\text{usar } c_i, \text{ignorar } c_i\}$.
  - $\delta((i, s), \text{usar}) = (i, s + c_i) \quad \text{si } s + c_i \le x$.
  - $\delta((i, s), \text{ignorar}) = (i+1, s)$.
  - $q_0 = (1, 0)$.
  - $F = \{(i, x) \mid 1 \le i \le n\}$.
- **Ecuación de Recurrencia:**
  $$dp[i][s] = dp[i-1][s] + dp[i][s - c_i] \quad \text{sujeto a } dp[i][0] = 1, \text{ para } i \in \{1,\dots,n\}$$

## 2.5. Removing Digits

- **Definición Formal:**
  - $Q = \{0, 1, \dots, n\}$.
  - $\Sigma(s) = \{d \mid d \text{ es un elemento atómico en la representación decimal escalar de } s\}$. Es un alfabeto condicionado dinámicamente por la métrica de $q$.
  - $\delta(s, d) = s - d$. Costo transaccional constante $w = 1$.
  - $q_0 = n$. (La resolución exige una contracción de cardinalidad o enfoque inverso top-down).
  - $F = \{0\}$.
- **Ecuación de Recurrencia:**
  $$dp[s] = \min_{d \in \text{digits}(s)} (dp[s - d] + 1) \quad \text{sujeto a } dp[0] = 0$$

## 2.6. Book Shop

- **Definición Formal:**
  - $Q = \{0, \dots, n\} \times \{0, \dots, x\}$ (Índice cronológico del libro evaluado $i$, Presupuesto residual acumulado $p$).
  - $\Sigma = \{0, 1\}$ (0: ignorar transición ortogonal, 1: aceptar transición y contraer presupuesto).
  - Vectores invariantes: Precios $h_i$, Páginas (ganancia topológica) $s_i$.
  - $\delta((i, p), 0) = (i+1, p)$ con ganancia adquirida $w = 0$.
  - $\delta((i, p), 1) = (i+1, p + h_{i+1})$ con ganancia adquirida $w = s_{i+1}$, transición legal s.s.s $p + h_{i+1} \le x$.
  - $q_0 = (0, 0)$.
  - $F = \{(n, p) \mid 0 \le p \le x\}$.
- **Ecuación de Recurrencia:**
  $$dp[i][p] = \max(dp[i-1][p], dp[i-1][p - h_i] + s_i) \quad \text{sujeto a } dp[0][p] = 0$$

---

# 3. Plantilla de Código Universal

La siguiente abstracción programática en estándar `C++20` expone un isomorfismo estructural elegante entre la exploración recursiva del espacio paramétrico de estados (Top-Down apoyado por técnicas de memorización; matemáticamente análogo a un recorrido DFS sobre el Grafo de Transición) y la evaluación iterativa basada en el ordenamiento topológico del modelo (Bottom-Up).

```cpp
#include <bits/stdc++.h>
using namespace std;

// =====================================================================
// [I] Definiciones Paramétricas del Modelo Matemático
// =====================================================================
const int INF = 1e9;
const int MOD = 1e9 + 7;

// Espacio de estados Q (Dimensionalidad sujeta a las restricciones de la 5-tupla)
int n, target;
vector<int> decision_alphabet; 
vector<int> dp_memo; 

// =====================================================================
// [II] Semántica Top-Down: Evaluación del DFA con Búsqueda en Profundidad
// =====================================================================
int dfs_automata(int state) {
    // 1. Condición de Aceptación (F) o Convergencia al Caso Base (q0)
    // Para problemas de conteo retornar identidad multiplicativa (1). 
    // Para min/max costo retornar identidad sumatoria (0).
    if (state == target) return 1; 
    
    // 2. Ruptura Invariante: Transiciones Inválidas (Conmutación a conjunto vacío)
    if (state > target) return 0; // O retornar INF para mínimo costo topológico.

    // 3. Memorización Pura: Poda estructural de isomorfismos en el DAG
    if (dp_memo[state] != -1) return dp_memo[state];

    // Elemento absorbente u operando neutro (0 para sumas modulares y máximo, INF para mínimo)
    int local_aggregation = 0; 

    // 4. Propagación Divergente a través del Alfabeto de Decisiones
    for (int action : decision_alphabet) {
        // Computar evaluación funcional de transición: q' = delta(q, a)
        int next_state = state + action; 
        
        // Ecuación de recurrencia acoplada
        local_aggregation = (local_aggregation + dfs_automata(next_state)) % MOD;
    }

    // Convergencia y asignación del cómputo escalar final sobre el vértice v
    return dp_memo[state] = local_aggregation;
}

// =====================================================================
// [III] Semántica Bottom-Up: Evaluación Iterativa por Ordenamiento Topológico
// =====================================================================
void bottom_up_dag() {
    // Representación lineal del espacio de estados Q
    vector<int> dp(target + 1, 0); 
    
    // 1. Inyección de Estado Inicial (q0)
    dp[0] = 1; 

    // 2. Extensión escalar respetando el ordenamiento topológico canónico del DAG
    for (int state = 0; state <= target; ++state) {
        
        // Poda topológica: Si el estado no fue alcanzado (es inalcanzable desde q0), descartar iteración.
        if (dp[state] == 0) continue; 
        
        // 3. Proyección de Aristas Salientes Hacia Vectores Futuros
        for (int action : decision_alphabet) {
            
            int next_state = state + action; // Invocación de delta(q, a)
            
            // Relajamiento de aristas (Edge Relaxation) si la precondición es legal
            if (next_state <= target) {
                dp[next_state] = (dp[next_state] + dp[state]) % MOD;
            }
        }
    }
    
    // 4. Extracción Unívoca del Resultado en el Conjunto de Aceptación F
    cout << dp[target] << "\n";
}

int main() {
    // Configuración I/O de alta eficiencia (Performance I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Típicamente aquí se inicializan los parámetros de la 5-tupla (n, x, Sigma) y dp_memo
    // ...
    
    return 0;
}
```

