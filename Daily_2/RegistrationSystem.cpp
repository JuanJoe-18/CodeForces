#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<string> regs(n);
  for (int i = 0; i < n; i++) {
    cin >> regs[i];
  }
  map<string, int> freq;
  for (string s : regs) {
    if(freq[s] == 0){
        cout << "OK" << endl;
    }
    else cout << s << freq[s] << endl;
        freq[s]++;

  }  
  return 0;
}
