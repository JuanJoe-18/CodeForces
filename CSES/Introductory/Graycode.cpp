#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ostream>
using namespace std;

int main() {
  map<int, string> l;
  l[0] = "00";
  l[1] = "01";
  l[2] = "11";
  l[3] = "10";

  int n;
  cin >> n;
  if (n == 1) {
    for (int i = 0; i < 2; i++) {
      cout << l[i] << endl;
    }
  } else {
    n--;
    while (n--) {
      for (int i = 0; i < 4; i++) {
        cout << l[i] << endl;
      }
    }
  }

  return 0;
}
