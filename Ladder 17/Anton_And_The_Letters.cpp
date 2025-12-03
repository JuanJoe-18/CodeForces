#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
string eliminarEspacios(const string& str);
int main (){
    set<char> u;
    string a;
    getline(cin,a);
    string s = eliminarEspacios(a);
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a'  || s[i] == 'b' || s[i] == 'c'){
            u.insert(a[i]);
        }
    }

    for (auto it = u.begin(); it != u.end(); it++) {
      cout << *it;
    }
    
    cout << u.size() << endl;

 return 0;
}

string eliminarEspacios(const string& str) {
    string temp = str;
    temp.erase(remove_if(temp.begin(), temp.end(), ::isspace), temp.end());
    return temp;
}

;