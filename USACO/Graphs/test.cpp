#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int misterioA(const vector<int> &a) {
  if (a.empty())
    return -1;
  return a[0];
}

int misterioB(int n) {
  int contador = 0;
  while (n > 0) {
    n /= 2;
    contador++;
  }
  return contador;
}

int misterioC(const vector<int> &a) {
  int ans = a[0];
  for (int i = 1; i < (int)a.size(); i++) {
    if (a[i] > ans) {
      ans = a[i];
    }
  }
  return ans;
}

void misterioD(vector<int> &a) { sort(a.begin(), a.end()); }

int misterioE(const vector<int> &a, int k) {
  int n = a.size(), total = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == k) {
        total++;
      }
    }
  }
  return total;
}

vector<vector<int>> misterioF(const vector<vector<int>> &A,
                              const vector<vector<int>> &B, int n) {
  vector<vector<int>> C(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v = {9, 3, 7, 1, 5};
  int n = v.size();

  int rA = misterioA(v);
  int rB = misterioB(16);
  int rC = misterioC(v);
  misterioD(v);
  int rE = misterioE(v, 8);

  vector<vector<int>> M1 = {{1, 2}, {3, 4}};
  vector<vector<int>> M2 = {{2, 0}, {1, 2}};
  vector<vector<int>> rF = misterioF(M1, M2, 2);

  cout << rA << "\n" << rB << "\n" << rC << "\n" << rE << "\n";

  return 0;
}
