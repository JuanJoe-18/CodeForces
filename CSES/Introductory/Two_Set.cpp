#include<bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    vector<int> a;
    vector<int> u;
    set<int> v;
    for (size_t i = 0; i < n; i++) a.push_back(i+1);


    if (((n*(n+1))/2 ) % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    if (n % 4 == 0) {
        int veces = n/4;
        int l = 0 , r = n - 1;
        while (veces--) {
            if ((a[l] + a[r]) == n+1) {
                v.insert(a[r]); v.insert(a[l]);
                l++;r--;
            }
        }
    } else if ((n+1) % 4 == 0) {
        int veces = ((n+1)/4) - 1;
        v.insert(n);
        int l = 0 , r = n - 2;
        while (veces--) {
            if ((a[l] + a[r]) == n) {
                v.insert(a[r]); v.insert(a[l]);
                l++;r--;
            }
        }
    }
    cout << "YES" << endl;
    cout << v.size() << endl;
    for ( int i : v ) {
        cout << i << " ";
    }
    cout << endl;
    cout << n - v.size() << endl;
    for (int i: a) {
        if (!v.count(i)) {
            cout << i << " ";
        }

    }
    cout << endl;


    
    
    


    
    
    
    







    return 0;
}