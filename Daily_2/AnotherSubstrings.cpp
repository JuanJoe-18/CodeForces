#include <bits/stdc++.h>
#include <cmath>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
  int x; string s;
  cin >> x;
  cin >> s;
  ll count = 0;
  ll sum = 0;
  map<ll, int> freq;
  freq[0] = 1; 

  for(char c: s) {
    if (c == '1') sum++;
    count += freq[sum - x]; 
    freq[sum]++;   
  }        
  

  cout << count << endl;
  return 0;
}