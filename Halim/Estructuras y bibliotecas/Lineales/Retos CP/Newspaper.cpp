#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; 
    cin >> t;
    while(t--){
        map<char,int> a;
        int k; 
        cin >> k;
        while (k--) {
            char c; 
            int v;
            cin >> c >> v;
            a[c] = v;
        }

        int m; 
        cin >> m;
        cin.ignore();

        map<char,int> art;
        while(m--){
            string line;
            getline(cin,line);
            for(char x : line){
                art[x]++;
            }
        }

        ll sum = 0;
        for(auto &p: a){
            auto it = art.find(p.first);
            if (it != art.end()){
                sum += 1LL * p.second * it->second;
            }
        }
        double ans = 1.0*sum/100;

        printf("%.2f$\n",ans);
    }
    return 0;
}