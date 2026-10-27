#include <bits/stdc++.h>

using namespace std;

int main () {
    int P, D; cin >> P  >> D;
    vector<int> plats(P,0);
    for (int d = 0; d < D; d++) {
        int K; cin >> K;
        for (int i = 0; i < K; i ++) plats[i]++;
        sort(plats.begin(),plats.begin() +  K);
    }
    int ans = *max_element(plats.begin(),plats.end());

    cout << ans << "\n";
    return 0;
}