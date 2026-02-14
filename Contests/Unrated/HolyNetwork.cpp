#include <bits/stdc++.h>
#include <map>
#include <memory>
using namespace std;
map<int, int> f_primos;
typedef long long ll;

ll nums;

void upf(int n, int index) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && !f_primos.contains(i)) {
            f_primos[i] = index;
            while (n % i == 0) n /= i;
        }else if (n % i == 0 && f_primos.contains(i)) {
        
        }
    }
    if (n > 1) f_primos[n] = index;
}

int main() {
  while (true) {
    int n;
    cin >> n;
    if (!n)
      break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      upf(a[i], i);
    }
  }
}