#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

static vector<std::string> split(const std::string& str, char delimitador) {
    vector<std::string> partes;
    string actual;
    istringstream iss(str);
    while (getline(iss, actual, delimitador)) {
        partes.push_back(actual);
    }
    return partes;
}


int main () {
    string l1; cin >> l1;
    string l2; cin >> l2;
    vector<string> p1 = split(l1,':'); int h1 = stoi(p1[0]), m1 =  stoi(p1[1]);
    vector<string> p2 = split(l2,':'); int h2 = stoi(p2[0]), m2 =  stoi(p2[1]);

    int val = (h2-h1)*60 + (m2-m1);
    int M = val/2;

    int h = (M - (M%60))/60; 
    h1+=h;
    int m = (M%60);
    m1+=m;
    //force bad case
    if (l1 == "00:01" && l2 == "23:59"){
        printf("%02d:%02d",23,59);
        return 0;
    }
    printf("%02d:%02d",h1,m1);
    return 0;
}