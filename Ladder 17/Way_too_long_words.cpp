#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main (){
    int n;
    cin >> n;
    while (n--) {
        string a;
    cin >> a;
    if(a.size() <= 10){
        cout << a << endl;
    } else {
      cout << a[0] <<a.size()-2 << a[a.size()-1]<< endl;
    }
    
    }
 return 0;
}

string eliminarEspacios(const string& str) {
    string temp = str;
    temp.erase(remove_if(temp.begin(), temp.end(), ::isspace), temp.end());
    return temp;
}

;