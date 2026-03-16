#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
    int s, n;
    cin >> s >> n;
    ll sum = s;
    multimap<int,int> a;
    while (n--){
        int x , y;
        cin >> x >> y;
        a.insert({x,y});
    }

    bool loses = false;

    for (auto p: a) {
        if (sum > p.first) {
            sum += p.second;
        } else {
            loses = true;
        }
    }
    cout << (loses ? "NO":"YES") << endl;
    return 0;
}