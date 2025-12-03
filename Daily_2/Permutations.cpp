#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<int, int> freq;
  for (int c : a) {
    freq[c]++;
  }
  
  int maxFreq = 0;
  for (auto it = freq.begin(); it != freq.end(); it++) {
    maxFreq = max(maxFreq, it->second);
  }

  if (maxFreq <= (n + 1) / 2) cout << "YES";
  else cout << "NO";
  return 0;
}
