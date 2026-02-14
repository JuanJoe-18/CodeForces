#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;




int main() {
    //int t; cin >> t;
    //while (t--) {

    int n; cin >> n;
    sieve(3E5);
    for (int i = 0; i < n; ++i) {
        cout << primes[i] << " ";

    }

   // }

    return 0;
}