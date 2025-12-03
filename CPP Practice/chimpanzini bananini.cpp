#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int q, s;
        deque<int> b;
        cin >> q;
        while (q--) {
            cin >> s;
            if (s == 3) {
                int k;
                cin >> k;
                b.push_back(k);
            } else if (s == 2) {
                reverse(b.begin(), b.end());
            } else {
                int last = b.back();
                b.pop_back();
                b.push_front(last);
            }
            long long rizz = 0;
            int idx = 1;
            for (int x : b) {
                rizz += 1LL * x * idx;
                ++idx;
            }
            cout << rizz << "\n";
        }
    }
    return 0;
}






/*int rizz(vector<int> b);


int main(){
    int t;
    cin >> t;
    while (t--)
    {
    int q,s;
    vector<int> b;
    cin >> q;
    while (q--)
    {
        cin >> s;
        if(s == 3) { 
            int k;
            cin >> k;
            b.push_back(k);
        }else if(s == 2){
            std::reverse(b.begin(), b.end());
        }else{
            int last = b.back();
            b.pop_back();
            b.insert(b.begin(),last);
        }
        cout << rizz(b) << "\n";
        
    }
    }
    
    return 0;
}

int rizz(vector<int> b){
    int rizz = 0;
    for (int i = 0; i < b.size(); i++)
    {
      rizz += b[i] * (i + 1);
    }
    return rizz;
}*/