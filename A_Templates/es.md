$$ DP(v) = \begin{cases} 
1 & \text{si } v = 1 \\[1ex]
\max\limits_{u \in In(v)} (DP(u) + 1) & \text{si } In(v) \neq \emptyset \text{ y } DP(u) \neq -\infty \\[1ex]
-\infty & \text{en otro caso (nodo inalcanzable)} 
\end{cases} $$
