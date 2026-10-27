#include<bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    bitset<24> a(n);


    vector<bitset<8>> v(3);
    int j = 0;
    for (int i = 0; i < n; i++) {
        string s = "";
        s.append(to_string(a[i]));
        if (i % 8 == 0) j++;
    }




    return 0;
}
