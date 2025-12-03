#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0, q = 0 ;
    cin >> n >> q;
    vector<long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long> sum(n);
    sum[0] = a[0];

    for (int i = 1; i < n; i++) {
    sum[i] = sum[i-1] + a[i];
}
    
    for (int i = 0; i < q; i++) {
        long l = 0, r = 0;
        cin >> l >> r;
        long solve = sum[r-1] - (l > 1 ? sum[l-2] : 0);
        cout << solve << endl;
    }
    return 0;
}