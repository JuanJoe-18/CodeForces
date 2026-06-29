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
vector<vi> adj;
vi visited;
vi p; // PARENTS

// DFS
void dfs(int u){
    visited[u]=1;
    for(int v: adj[u]){
        if(!visited[v]) dfs(v);
    }
}

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

vector<int> bfs(int s, int t) {
    queue<int> q; q.push(s);
    visited[s] = 1; p[s] = -1;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        if (u == t) break;

        for(int v : adj[u]) if(!visited[v]) {
            visited[v] = 1;
            p[v] = u;
            q.push(v);
        }
    }
    vector<int> path;
    if (!visited[t]) return path;
    for (int v = t; v != -1; v = p[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    return path;
}

// Dijkstra
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

// Union-Find (DSU)
struct DSU {
    vi p,sz;
    DSU(int n){ p.resize(n); sz.assign(n,1); iota(all(p),0); }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
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
int nGrid, mGrid;
vector<string> grid;
vector<vi> visGrid;

// 4 direcciones: arriba, abajo, izquierda, derecha
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// cambiar la condicion del caracter segun el problema
bool isValidGrid(int r, int c){
    return (r >= 0 && r < nGrid && c >= 0 && c < mGrid && !visGrid[r][c] && grid[r][c] != '#');
}

void dfsGrid(int r, int c){
    visGrid[r][c] = 1;
    for(int i = 0; i < 4; ++i){
        int nx = r + dx[i];
        int ny = c + dy[i];
        if(isValidGrid(nx, ny)) dfsGrid(nx, ny);
    }
}

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

// Fenwick Tree
struct Fenwick {
    int n; vll bit;
    Fenwick(int n): n(n), bit(n+1,0) {}
    void add(int idx,ll val){ for(;idx<=n;idx+=idx&-idx) bit[idx]+=val; }
    ll sum(int idx){ ll r=0; for(;idx>0;idx-=idx&-idx) r+=bit[idx]; return r; }
    ll range(int l,int r){ return sum(r)-sum(l-1); }
};

// Segment Tree (suma)
struct SegTree {
    int n; vll st;
    SegTree(int n): n(n), st(4*n,0) {}
    void update(int idx,int l,int r,int pos,ll val){
        if(l==r){ st[idx]=val; return; }
        int mid=(l+r)/2;
        if(pos<=mid) update(2*idx,l,mid,pos,val);
        else update(2*idx+1,mid+1,r,pos,val);
        st[idx]=st[2*idx]+st[2*idx+1];
    }
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

// KMP prefix-function
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

// Z-function
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

//Busqueda binaria
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

int query(int L, int R) { // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R-(1<<k)+1][k]);
}




int main() {
    fastio;
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    int n;
    cin >> n;
    int m = n-1;
    adj.resize(n+1);
    visited.assign(n + 1,false);
    p.resize(n+1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj.at(u).push_back(v);
    }

    vector<int> ans(n+1);

    for (size_t u = 1; u <= n; u++) {
        for (size_t v = 1; v <= n ; v++) {
            visited.assign(n + 1, false);
            auto x = bfs(u,v);
            if (!x.empty() && u != v) {
                ans[v]++;
            }
        }
    }

    bool ok = 0;
    int x = 0;
    for (int i = 1; i < ans.size(); ++i) {
        if (ans[i] == n-1) {
            x = i;
            ok = 1;
            break;
        }
    }
    if (ok) cout << x << endl;
    else cout << -1 << endl;
}
