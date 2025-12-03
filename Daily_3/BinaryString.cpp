#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<char> ans;

void solve(int a, int b, int x) {
    if (x == 1) {
        if (a >= b) {
            for (int i = 0; i < a; ++i) ans.push_back('0');
            for (int i = 0; i < b; ++i) ans.push_back('1');
        } else {
            for (int i = 0; i < b; ++i) ans.push_back('1');
            for (int i = 0; i < a; ++i) ans.push_back('0');
        }
        return;
    }
    
    int count0 = a, count1 = b;
    char i_char = (a >= b) ? '0' : '1';

    for (int i = 0; i < x; ++i) {
        char current_c = (i % 2 == 0) ? i_char : ((i_char == '0') ? '1' : '0');
        
        if (current_c == '0') {
            ans.push_back('0');
            count0--;
        } else {
            ans.push_back('1');
            count1--;
        }
    }
    
    char lca = ans.back();
    if (lca == '0') {
        for (int i = 0; i < count0; ++i) ans.push_back('0');
        for (int i = 0; i < count1; ++i) ans.push_back('1');
    } else { 
        for (int i = 0; i < count1; ++i) ans.push_back('1');
        for (int i = 0; i < count0; ++i) ans.push_back('0');
    }
}

int main() {
  int a, b, x;
  cin >> a >> b >> x; 
  solve(a ,  b,  x);
  for (int i = 0; i < ans.size(); i++) {
	cout << ans[i];
  }



  return 0;
}

  /*
        2 2 1 => 0011
        3 3 3 => 011 -> 010011

        5 3 5-- => 100 -> 01010    100
		                  ...... 

		 parece que si

		010110
        ... .

  		20 10 15 -> 010101010101010000000000000111

  		2 2 1
		si k = 1


*/