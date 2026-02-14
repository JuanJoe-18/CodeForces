#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin >> q;
    map<int,int> m;
    int l = 0, r = 0;
    while (q--){
        char c; int id;
        cin >> c >> id;
        if(c == 'L'){
            l--;
            m[id] = l;
        }else if (c == 'R'){
            m[id] = r;
            r++;
        } else{
            int p = m[id];
            int dl = p - l;
            int dr = r-p-1;
            cout << min(dl, dr) << endl;
        }
    }

    return 0;

}