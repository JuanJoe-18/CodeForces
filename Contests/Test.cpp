#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
void sieve(int n, vector<int> primes, vector<bool> isPrime) {
  isPrime.assign(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      for (ll j = 1LL * i * i; j <= n; j += i)
        isPrime[j] = false;
    }
  }
}

int main() {
  vector<int> primes;
  vector<bool> isPrime;
  int n;
  cin >> n;
  sieve(n,primes,isPrime);
  return 0;
}