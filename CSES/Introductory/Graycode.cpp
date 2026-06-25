#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); ++i) {
        int gray_10 = i ^ (i >> 1);
        string gray_bin = bitset<16>(gray_10).to_string();
        cout << gray_bin.substr(16 - n) << endl;
    }

    return 0;
}