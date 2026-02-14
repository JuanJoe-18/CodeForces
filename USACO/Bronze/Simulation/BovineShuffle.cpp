#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n; cin >> n;
    vector<int> s; //
    vector<string> cows(n); // ids después de ordenamiento
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.push_back(x-1);
    }

    for (int i = 0; i < n; ++i) {
        cin >> cows[i];
    }
    map<int,string> temp;
    for (int k = 0; k < 3; k++) {
        for (size_t i = 0; i < n; i++) {
            temp[i] = cows[i];
            if(temp.count(s[i])){
                auto p = *temp.find(s[i]);
                cows[i] = p.second;
                temp.erase(s[i]);
            } else {
                cows[i] = cows[s[i]];
            }
        }
    }

    for (string id: cows) {
        cout << id << endl;
    }
    return 0;
}

/*
5
1 3 4 5 2
a b c d e

-> a e b c d
 */