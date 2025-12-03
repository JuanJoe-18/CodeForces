#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;
int solve(char c) {
  int l = 0, r = 0;
  int dist_c = 0; 
  int ans = 0;
  while (l < n) {
    while (r < n && dist_c + (s[r] != c) <= k) {
      if (s[r] != c) dist_c++;
      r++;
    }
    ans = fmax(ans, r - l);
    if (s[l] != c) dist_c--;
    l++;
  }
  return ans;
}

int main() {
  cin >> n >> k;
  cin >> s;
  map<char,int> freqs;
  cout << fmax(solve('a'), solve('b') ) << endl;
  return 0;
}