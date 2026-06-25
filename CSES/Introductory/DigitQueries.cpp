#include <iostream>
#include <string>
typedef long long ll;

using namespace std;

void solve() {
    ll k;
    cin >> k;

    ll length = 1;  
    ll count = 9;    
    ll start = 1;   

    while (k > length * count) {
        k -= length * count;
        length++;
        count *= 10;
        start *= 10;
    }
    start += (k - 1) / length;
    string s = to_string(start);
    cout << s[(k - 1) % length] << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q;
    if (cin >> q) {
        while (q--) {
            solve();
        }
    }
    return 0;
}