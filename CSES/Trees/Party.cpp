#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;


const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const double EPS = 1e-9;




vector<vi> children;
vi parent;

ll ans = 0;


void dfs(int u, int depth){
    ans = fmax(ans, depth);
    for(int v : children[u]) {
        dfs(v, depth+1);
    }
}


int main(){
    fastio;
    vector<int> roots;
    int n; cin>>n;
    parent.resize(n + 1);
    children.resize(n + 1);
    for(int i=1;i<=n;i++) {
        int p_i; cin >> p_i;
        if (p_i != -1) {
            parent[i] = p_i;
            children[p_i].pb(i);
        } else {
            roots.pb(i);
        }
    }

    for (int r : roots) {
        dfs(r, 0);
    }

    cout << ans + 1 << endl;


    return 0;
}
