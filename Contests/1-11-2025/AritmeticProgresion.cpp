#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> b(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(b.begin(), b.end());

  for (int i = 1; i < n; i++) {
    sum += b[i] - b[i - 1];
    cout <<"dif : " << b[i] - b[i - 1] << endl;
  }

  cout << "sum -> " << sum << endl;

  cout << ceil() << endl;





  return 0;
}