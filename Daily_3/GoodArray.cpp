#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int n;
    cin >> n;
    multimap<ll, int> id;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        id.insert({x, i + 1});
        sum += x;
    }
    set<int> ans;
    for (auto p : id) {
        ll x = p.first;
        ll s = sum - x;

        auto it = id.find(s - x);
        int c = id.count(s-x);

        
        //printf("x:%d -> id: %d, s:%d , f:%d ,count=%d \n", x,p.second,s, (*it).second, c);
    

       for(int i = 0; i < c; i++){
         if(p.second != (*it).second && (*it).second != 0){
                ans.insert((*it).second);
            }
         ++it;
       }
    }
    cout << size(ans) << endl;
    if (size(ans)) {
        for (int i : ans) {
            cout << i << " ";
        }
    }
    return 0;
}


/*

4
8 3 5 2

Sum = 18

1: 8  -> 10 -- find(s-8) -> 2
2: 3  -> 15 -- find(s-3) -> 10
3: 5  -> 13 -- find(s-5) -> 8 
4: 2  -> 16 -- find(s-2) -> 14


5
2 5 1 2 2

Sum = 12

1: 2  -> 10 -- find(s-2) -> 8  🚫
2: 5  -> 7  -- find(s-5) -> 2  🆗 🆗 🆗 porque hay 3 doces
3: 1  -> 11 -- find(s-1) -> 10 🚫
4: 2  -> 10 -- find(s-2) -> 8  🚫
5: 2  -> 10 -- find(s-2) -> 8  🚫



5
2 1 2 4 3

Sum = 12

1: 2  -> 10 -- find(s-2) -> 8  🚫
2: 1  -> 11 -- find(s-1) -> 10 🚫
3: 2  -> 10 -- find(s-2) -> 8  🚫
4: 4  -> 8  -- find(s-4) -> 4  🚫 aparece pero es el mismo
4: 3  -> 9  -- find(s-3) -> 6  🚫



*/

