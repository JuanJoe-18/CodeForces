#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
  vector<vector<int>> c(8, vector<int>(8, 0));
  int s = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      c[i][j] = s;
	  s++;
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      printf("fila: %d; columna: %d; valor: %d \n",i,j,c[i][j] );
    }
  }

  return 0;
}
