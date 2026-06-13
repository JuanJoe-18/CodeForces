#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    map<int, int> freq;
    
    for (int i = 0; i < 3 * n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    bool carlinhos_wins = false;

    for (auto const& par : freq) {
        if (par.second % 3 != 0) {
            carlinhos_wins = true;
            break;
        }
    }

    if (carlinhos_wins) {
        cout << "Y" << endl;;
    } else {
        cout << "N" << endl;
    }

    return 0;
}