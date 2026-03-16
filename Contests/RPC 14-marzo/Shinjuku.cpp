#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int to_seconds(string s) {
    int h = stoi(s.substr(0, 2));
    int min = stoi(s.substr(3, 2));
    int sec = stoi(s.substr(6, 2));
    return h * 3600 + min * 60 + sec;
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;

    vector<int> llegadas(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        llegadas[i] = to_seconds(s);
    }

    vector<int> salidas(m);
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        salidas[i] = to_seconds(s);
    }

    int s_threshold; 
    cin >> s_threshold;

    int min_diff = -1;

    for (int a : llegadas) {
        for (int d : salidas) {
            int diff = d - a;
            if (diff >= s_threshold) {
                if (min_diff == -1 || diff < min_diff) {
                    min_diff = diff;
                }
            }
        }
    }

    cout << min_diff << endl;

    return 0;
}