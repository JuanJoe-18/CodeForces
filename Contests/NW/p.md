3. Condición Necesaria y Suficiente
Para obtener cada cristal objetivo $b_j$, necesitas que provenga de un segmento de al menos $b_j$ cristales originales.
Como los $m$ cristales finales son disjuntos, necesitas en total al menos: $$\sum_{j=1}^m b_j \text{ cristales originales}$$
Como originalmente tienes $n$ cristales:
Si $\sum_{j=1}^m b_j \le n$: SIEMPRE ES POSIBLE (YES), ya que puedes partir el arreglo en $m$ trozos de tamaños $L_j \ge b_j$ y transformar cada trozo en $b_j$.
Si $\sum_{j=1}^m b_j > n$: ES IMPOSIBLE (NO), porque no tienes suficientes cristales para generar esa suma de energías.