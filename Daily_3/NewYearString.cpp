#include <bits/stdc++.h>
using namespace std;
bool cont(string str, string sub){
    return  (str.find(sub) != std::string::npos) ? 1 : 0;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int h = 0;//dbg

        if (cont(s,"2025") && !cont(s,"2026")) {
            cout << 1 << endl;
        } else if(s.find("2026") != std::string::npos ) {
            cout << 0 << endl;
        } else {
            cout << 0 << endl;
        }
    }



    return 0;
}