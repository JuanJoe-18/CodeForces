#include <bits/stdc++.h>
#include <ios>
#define endl '\n'
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x, n;
    cin >> x >> n; 
    set<int> lights = {0, x};    
    multiset<int> segments = {x};  

    for (int i = 0; i < n; i++) {
        int p; 
        cin >> p; 
        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        segments.erase(segments.find(right - left));
        segments.insert(p - left);
        segments.insert(right - p);

        lights.insert(p);

        cout << *segments.rbegin();
        if (i < n - 1) cout << " ";
    }
    return 0;
}
