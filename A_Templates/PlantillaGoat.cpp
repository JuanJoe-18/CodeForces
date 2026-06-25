#include <bits/stdc++.h>
using namespace std;

// ================================
// 🚀 Entrada/Salida rápida
// ================================
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// ================================
// 🚀 Atajos
// ================================
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// ================================
// 🚀 Constantes globales
// ================================
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;  // cambiar según el problema
const double EPS = 1e-9;

// ================================
// 🚀 Funciones matemáticas
// ================================
ll gcd(ll a, ll b){ return b==0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b){ return a/gcd(a,b)*b; }

// Factorización prima
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

// Factores primos únicos (sin repetir)
vector<int> uniquePrimeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

//factorial normal (n)!
ll factorial(int n) {
    ll res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= i;
    }
    return res;
}



ll modpow(ll a, ll b, ll m=MOD){
    ll res=1; a%=m;
    while(b>0){
        if(b&1) res=res*a % m;
        a=a*a % m;
        b >>= 1;
    }
    return res;
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

// factoriales modulares
const int MAXN = 2e5+5;
ll fact[MAXN], invfact[MAXN];

ll modinv(ll a, ll m=MOD){ return modpow(a,m-2,m); }
void init_factorials(int n=MAXN){
    fact[0]=1;
    for(int i=1;i<n;i++) fact[i] = fact[i-1]*i % MOD;
    invfact[n-1] = modinv(fact[n-1]);
    for(int i=n-2;i>=0;i--) invfact[i] = invfact[i+1]*(i+1)%MOD;
}
ll nCr(int n,int r){
    if(r<0 || r>n) return 0;
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}

// Criba de Eratóstenes
vector<int> primes;
vector<bool> isPrime;
void sieve(int n){
    isPrime.assign(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(ll j=1LL*i*i;j<=n;j+=i) isPrime[j]=false;
        }
    }
}

// ================================
// 🚀 Grafos
// ================================
vector<vi> adj;     // lista de adyacencia
vi visited;         // vector de visitados
vi parent;          // padres para reconstruir caminos

/**
 * @brief Recorrido en profundidad (DFS) desde un nodo.
 * @param u Nodo actual desde donde se inicia/continua el recorrido.
 * @note Marca los nodos visitados en el vector global `visited`.
 */
void dfs(int u){
    visited[u]=1;
    for(int v: adj[u]){
        if(!visited[v]) dfs(v);
    }
}

/**
 * @brief Recorrido en anchura (BFS) desde un nodo origen.
 * @param s Nodo origen (source) donde comienza el BFS.
 * @note Marca los nodos visitados en el vector global `visited`.
 */
void bfs(int s){
    queue<int> q; q.push(s);
    visited[s]=1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: adj[u]){
            if(!visited[v]){
                visited[v]=1;
                q.push(v);
            }
        }
    }
}

/**
 * @brief BFS que reconstruye el camino mas corto entre dos nodos.
 * @param s Nodo origen (source).
 * @param t Nodo destino (target).
 * @return Vector con el camino de s a t (incluye ambos extremos).
 *         Si no hay camino, devuelve un vector vacio.
 * @note Requiere que `visited` y `parent` esten correctamente dimensionados.
 */
vector<int> bfs(int s, int t){
    queue<int> q; q.push(s);
    visited[s]=1; parent[s]=-1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        if(u==t) break;
        for(int v: adj[u]){
            if(!visited[v]){
                visited[v]=1;
                parent[v]=u;
                q.push(v);
            }
        }
    }
    vector<int> path;
    if(!visited[t]) return path;
    for(int v=t; v!=-1; v=parent[v]) path.push_back(v);
    reverse(all(path));
    return path;
}

/**
 * @brief Algoritmo de Dijkstra para caminos minimos.
 * @param n Cantidad de nodos del grafo (1-indexed).
 * @param src Nodo origen.
 * @return Vector de distancias minimas desde `src`. `dist[i]` es la distancia al nodo i.
 * @note Asume pesos de arista iguales a 1. Cambiar `d+1` si el grafo tiene pesos.
 */
vector<ll> dijkstra(int n,int src){
    vector<ll> dist(n+1,LINF);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;
    dist[src]=0; pq.push({0,src});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if(d>dist[u]) continue;
        for(auto v:adj[u]){
            if(dist[v]>d+1){ // peso=1, cambia si hay pesos
                dist[v]=d+1;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}

/**
 * @brief Estructura Union-Find (Disjoint Set Union).
 * @note Permite unir conjuntos y consultar si dos elementos estan conectados.
 */
struct DSU {
    vi p,sz;
    /**
     * @brief Constructor.
     * @param n Cantidad de elementos (0-indexed).
     */
    DSU(int n){ p.resize(n); sz.assign(n,1); iota(all(p),0); }
    /**
     * @brief Encuentra el representante del conjunto de x.
     * @param x Elemento a consultar.
     * @return Representante del conjunto (con compresion de caminos).
     */
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    /**
     * @brief Une los conjuntos de a y b.
     * @param a Primer elemento.
     * @param b Segundo elemento.
     * @return `true` si se realizo la union, `false` si ya estaban en el mismo conjunto.
     */
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(sz[a]<sz[b]) swap(a,b);
        p[b]=a; sz[a]+=sz[b];
        return true;
    }
};

// ================================
// 🚀 Grafos en grilla (Grid)
// ================================
int nGrid, mGrid;           // dimensiones de la grilla
vector<string> grid;        // grilla leida como cadenas
vector<vi> visGrid;         // matriz de visitados

// 4 direcciones: arriba, abajo, izquierda, derecha
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

/**
 * @brief Verifica si una celda es valida para moverse.
 * @param r Fila de la celda.
 * @param c Columna de la celda.
 * @return `true` si esta dentro de la grilla, no fue visitada y no es pared ('#').
 * @note Cambiar la condicion del caracter segun el problema.
 */
bool isValidGrid(int r, int c){
    return (r >= 0 && r < nGrid && c >= 0 && c < mGrid && !visGrid[r][c] && grid[r][c] != '#');
}

/**
 * @brief DFS sobre grilla desde una celda.
 * @param r Fila actual.
 * @param c Columna actual.
 * @note Marca las celdas visitadas en `visGrid`.
 */
void dfsGrid(int r, int c){
    visGrid[r][c] = 1;
    for(int i = 0; i < 4; ++i){
        int nx = r + dx[i];
        int ny = c + dy[i];
        if(isValidGrid(nx, ny)) dfsGrid(nx, ny);
    }
}

/**
 * @brief BFS sobre grilla desde una celda origen.
 * @param sr Fila origen (source row).
 * @param sc Columna origen (source column).
 * @note Marca las celdas visitadas en `visGrid`.
 */
void bfsGrid(int sr, int sc){
    queue<pii> q;
    q.push({sr, sc});
    visGrid[sr][sc] = 1;
    while(!q.empty()){
        auto [r, c] = q.front(); q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = r + dx[i];
            int ny = c + dy[i];
            if(isValidGrid(nx, ny)){
                visGrid[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
}

// Ejemplo de lectura de grilla:
// cin >> nGrid >> mGrid;
// grid.resize(nGrid);
// for(int i = 0; i < nGrid; ++i) cin >> grid[i];
// visGrid.assign(nGrid, vi(mGrid, 0));

// ================================
// 🚀 Estructuras de rango
// ================================

// Fenwick Tree (Binary Indexed Tree)
struct Fenwick {
    int n; vll bit;
    /**
     * @brief Constructor.
     * @param n Tamano del arreglo (1-indexed internamente).
     */
    Fenwick(int n): n(n), bit(n+1,0) {}
    /**
     * @brief Suma `val` en la posicion `idx`.
     * @param idx Indice (1-indexed).
     * @param val Valor a sumar.
     */
    void add(int idx,ll val){ for(;idx<=n;idx+=idx&-idx) bit[idx]+=val; }
    /**
     * @brief Suma prefija desde 1 hasta `idx`.
     * @param idx Indice final (1-indexed).
     * @return Suma acumulada.
     */
    ll sum(int idx){ ll r=0; for(;idx>0;idx-=idx&-idx) r+=bit[idx]; return r; }
    /**
     * @brief Suma en el rango [l, r].
     * @param l Indice inicial (1-indexed).
     * @param r Indice final (1-indexed).
     * @return Suma del rango.
     */
    ll range(int l,int r){ return sum(r)-sum(l-1); }
};

// Segment Tree (suma)
struct SegTree {
    int n; vll st;
    /**
     * @brief Constructor.
     * @param n Tamano del arreglo.
     */
    SegTree(int n): n(n), st(4*n,0) {}
    /**
     * @brief Actualiza el valor en la posicion `pos`.
     * @param idx Indice del nodo actual en el arreglo del segment tree.
     * @param l Limite izquierdo del rango del nodo actual.
     * @param r Limite derecho del rango del nodo actual.
     * @param pos Posicion a actualizar.
     * @param val Nuevo valor.
     */
    void update(int idx,int l,int r,int pos,ll val){
        if(l==r){ st[idx]=val; return; }
        int mid=(l+r)/2;
        if(pos<=mid) update(2*idx,l,mid,pos,val);
        else update(2*idx+1,mid+1,r,pos,val);
        st[idx]=st[2*idx]+st[2*idx+1];
    }
    /**
     * @brief Consulta la suma en el rango [ql, qr].
     * @param idx Indice del nodo actual.
     * @param l Limite izquierdo del rango del nodo actual.
     * @param r Limite derecho del rango del nodo actual.
     * @param ql Limite izquierdo de la consulta.
     * @param qr Limite derecho de la consulta.
     * @return Suma en el rango consultado.
     */
    ll query(int idx,int l,int r,int ql,int qr){
        if(r<ql||qr<l) return 0;
        if(ql<=l && r<=qr) return st[idx];
        int mid=(l+r)/2;
        return query(2*idx,l,mid,ql,qr)+query(2*idx+1,mid+1,r,ql,qr);
    }
};

// ================================
// 🚀 Strings
// ================================

/**
 * @brief Calcula la funcion prefijo (pi) de KMP.
 * @param s Cadena de entrada.
 * @return Vector `pi` donde pi[i] es el largo del prefijo propio mas largo que tambien es sufijo de s[0..i].
 */
vector<int> prefix_function(string s){
    int n=s.size();
    vector<int> pi(n);
    for(int i=1;i<n;i++){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j]) j=pi[j-1];
        if(s[i]==s[j]) j++;
        pi[i]=j;
    }
    return pi;
}

/**
 * @brief Calcula el arreglo Z de una cadena.
 * @param s Cadena de entrada.
 * @return Vector `z` donde z[i] es el largo del prefijo de s que coincide con s[i..].
 */
vector<int> z_function(string s){
    int n=s.size(), l=0,r=0;
    vector<int> z(n);
    for(int i=1;i<n;i++){
        if(i<=r) z[i]=min(r-i+1,z[i-l]);
        while(i+z[i]<n && s[z[i]]==s[i+z[i]]) z[i]++;
        if(i+z[i]-1>r){ l=i; r=i+z[i]-1; }
    }
    return z;
}

/**
 * @brief Busqueda binaria en un arreglo ordenado.
 * @param a Arreglo ordenado de enteros.
 * @param x Valor a buscar.
 * @return Indice de `x` si se encuentra, -1 en caso contrario.
 */
int binary_search(const vi &a, int x){
    int l=0, r=a.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1; // no encontrado
}

//Sparse table

const int MAX_N = 200'005;
const int LOG = 17;
int a[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
int bin_log[MAX_N];

/**
 * @brief Consulta el minimo en el rango [L, R] usando Sparse Table.
 * @param L Indice izquierdo del rango.
 * @param R Indice derecho del rango.
 * @return Valor minimo en el rango [L, R].
 * @note Requiere preprocesamiento previo de `bin_log` y `m`.
 */
int query(int L, int R) { // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R-(1<<k)+1][k]);
}

// ================================
// 🚀 MAIN
// ================================
int main(){
    fastio;
    int t=1;
    // cin >> t; // 🔹 descomentar si hay múltiples casos
    while(t--){
        // ---------------------------
        // Aquí resuelves el problema
        // ---------------------------

        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        // ejemplo: suma
        ll sum = accumulate(all(a),0LL);
        cout << sum << "\n";
    }
    return 0;
}
