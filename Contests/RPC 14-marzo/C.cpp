#include <iostream>
#include <string>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {    
    fastio;
    int r, c;
    while (cin >> r >> c) {
        string s;
        cin >> s;
        
        int below = 0, rc = 0;
        for (char ch : s) {
            if (ch == 'R') {
                rc++;
            } else if (ch == 'D' && rc > 0) {
                below++;
                rc--;
            }
        }
        
        int above = 0, dc = 0;
        for (char ch : s) {
            if (ch == 'D') {
                dc++;
            } else if (ch == 'R' && dc > 0) {
                above++;
                dc--;
            }
        }
        
        cout << below + above << endl;
    }
    
    return 0;
}