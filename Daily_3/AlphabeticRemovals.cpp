#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> f; 
    for (char c : s) {
        f[c]++;
    }
    map<char, int> del;
    for (char i = 'a'; i <= 'z'; i++) {
        if (k > 0) {
            int freq = f[i];
            if (freq <= k) {
                del[i] = freq;
                k -= freq;
            } else {
                del[i] = k;
                k = 0;
            }
        }
    }

    for (char c : s) {
        if (del[c] > 0) {
            del[c]--;
        } else {
            cout << c;
        }
    }

    return 0;
}
