#include <bits/stdc++.h>
using namespace std;

int main() {
    string c;
    cin >> c;

    int cnt = 1;  
    bool found = false;

    for (int i = 1; i < (int)c.size(); i++) {
        if (c[i] == c[i-1]) {
            cnt++;
            if (cnt == 7) {
                found = true;
                break;
            }
        } else {
            cnt = 1;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
    return 0;
}
