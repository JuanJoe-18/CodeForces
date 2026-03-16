#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        int max = (d / m) + 1;
        int rest = n - (n % max);
        int q = rest / max;
        if (n % max == 0) {
            cout << q << endl;
        } else {
            cout << q + 1 << endl;
        }
    }

    return 0;
}