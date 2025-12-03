#include <bits/stdc++.h>
#include <cmath>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll count = 0;
  ll sum = 0;
  map<ll, int> freq;
  freq[0] = 1; 

  for (int i = 0; i < n; i++) {
    sum += a[i];
    count += freq[sum - x]; 
    freq[sum]++;           
  }

  cout << count << endl;

  

  return 0;
}