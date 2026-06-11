#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a; set<int> u;
        while (n--){
            int x; cin >> x;
            a.push_back(x);
            u.insert(x);
        }
        if (u.size() != a.size()){
            cout << -1 << endl;
            continue;
        }
        sort(a.rbegin(), a.rend());
        for (int i: a) cout << i << " ";
        cout << endl;
    }

    return 0;
}