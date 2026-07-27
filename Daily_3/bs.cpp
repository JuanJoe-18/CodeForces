#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end();





int main () {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << binarySearch(2, a, n) << '\n';


    return 0;
}