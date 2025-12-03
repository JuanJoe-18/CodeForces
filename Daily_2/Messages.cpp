#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<string> words(n);
    vector<int> cost(n);
    vector<string> q(m);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    map<string,int> group_of;
    vector<int> group_min(k,1e9);
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int x_i;
            cin >> x_i;
            x_i--;
            group_min[i] = min(group_min[i], cost[x_i]);
            group_of[words[x_i]] = i;
        }
    }
    ll total = 0;
    for (int i = 0; i < m; i++) {
        cin >> q[i];
        total += group_min[group_of[q[i]]];
    }
    cout << total<< endl;
    return 0;
}


