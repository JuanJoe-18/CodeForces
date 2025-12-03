#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  int mins;
  cin >> mins;
  if (mins <= 6*60) {
    cout << 0 << endl;
  }else if ( mins <= 9*60 ) {
    cout << 30 << endl;
  } else if (mins <= 10*60 +45) {
    cout << 45;
  }else {
    cout << mins - 600 << endl;
  }
  return 0;
}