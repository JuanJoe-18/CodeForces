#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio #define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int main() {
    int n; cin >> n;
    bitset<32> b(n);
    vector<bitset<8>> v;
    int times = (b.count()/7) + 1;
    for (int i = 0; i < times; i++) {
        string s;
        for (int j = 0; j < 8; j++) {
            s.append(b[j * times + i] ? "1" : "0");
            if (j % 7) {
                if (j * times + i < b.size()) {

                }
            }

        }

    }






    return 0;
}
