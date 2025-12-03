#include <bits/stdc++.h>
#include <vector>
using namespace std;
int solve(string s);
int main(){
    string s;
    cin >> s;
    int sv = solve(s);
    if(sv % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}

int solve(string s){
    set<int> letras;
    for(char c : s) {
        letras.insert(c);
    }
    return letras.size();
}