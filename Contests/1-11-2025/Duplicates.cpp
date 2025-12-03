#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    unordered_set<int> seen;
    vector<int> result;

    for (int i = n - 1; i >= 0; i--) {
        if 
        (seen.find(v[i]) == seen.end()) {
            seen.insert(v[i]);
            result.push_back(v[i]);
        }
    }

    reverse(result.begin(), result.end());

    cout << result.size() << endl;
    for (int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}
