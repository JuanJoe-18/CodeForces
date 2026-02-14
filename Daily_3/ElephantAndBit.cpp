#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int ms0;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '0'){
            ms0 = i;
            break;
        }
    }
    s.erase(s.begin() + ms0);
    cout << s << endl;
    return 0;
}