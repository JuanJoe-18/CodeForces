#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    string t;
    cin >> s >> t;

    multimap<char, int> s_idx;
    multimap<char, int> t_idx;
    for (int i = 0; i < n; i++) {
        s_idx.insert({s[i], i});
    }

    string ss = s;
    string ts = t;
    sort(ss.begin(), ss.end());
    sort(ts.begin(), ts.end());

    vector<int> moves;

    if (ss != ts) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == t[i]) {
            continue;
        }
        
        int j = -1;
        for (int k = i + 1; k < n; ++k) {
            if (s[k] == t[i]) {
                j = k;
                break;
            }
        }

        if (j == -1) { 
            cout << -1 << endl; 
            return 0;
        }

        for (int k = j; k > i; --k) {
            swap(s[k], s[k - 1]);
            moves.push_back(k); 
        }
    }

    if (moves.size() > 10000) {
        cout << -1 << endl;
        return 0;
    }

    cout << moves.size() << endl;
    
    for (int i = 0; i < moves.size(); ++i) {
        cout << moves[i] << ' ';
    }
return 0;
}