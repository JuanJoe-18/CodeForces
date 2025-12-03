#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> positions;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        positions[a[i]].push_back(i+1);
    }
    vector<pair<int,int>> ans;
    for (auto [number,v] : positions) {
        if(v.size() == 1) ans.push_back({number,0});
        else{
            int dif = v[1] - v[0];
            bool pass = true;
            for (int i = 1; i < v.size(); i++) {
                if(v[i] - v[i-1] != dif){
                 pass = false;
                 break;
                }
            }
            if (pass) ans.push_back({number, dif});
        }
    }
    cout << ans.size() << endl;
    for (auto [val, d] : ans) cout << val << " " << d << endl;
    


    

    return 0;
}
