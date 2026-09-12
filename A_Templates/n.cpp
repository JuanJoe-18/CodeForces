#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  int n = 40;
  map<int, int> m;
  for (int i = 1; i <= n; i++) {
    m[i] = i;
  }

  for (auto p : m) {
    printf("index: %d, value: %d\n", p.first, p.second);
  }
}
