#include <bits/stdc++.h>
using namespace std;



int main() {
    int n, k;
    cin >> n >> k;

    string t;
    cin >> t;

    int o = 0;

    for (int l = n - 1; l >= 1; --l) {
        string start = t.substr(0, l);
        string end = t.substr(n - l);

        if (start == end) {
            o = l;
            break;
        }
    }

    string s = t;
    
    string part = t.substr(o);
    
    for (int i = 0; i < k - 1; ++i) {
        s += part;
    }

    cout << s << endl;

    return 0;
}