#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int s, b;
    while (cin >> s && cin >> b) {

        if (!s && !b) return 0;
        vector<int> left(s+1);
        vector<int> right(s+1);

        for (int i = 1; i <= s; i++) {
            left[i] = i - 1;
            right[i] = i + 1;
        }

        int l_surv;
        int r_surv;

        while (b--) {
            int l,r; cin >> l >> r;
             l_surv = left[l];
             r_surv = right[r];

            if (l_surv != 0) cout << l_surv << " ";
            else {
                cout << "*" << " ";
            }

            if (r_surv <= s) cout << r_surv;
            else {
                cout << "*";
            }

            cout << "\n";

            if (l_surv != 0) right[l_surv] = r_surv;
            if (r_surv <= s) left[r_surv] = l_surv;
        }
        cout <<"-"<< endl;


    }




    return 0;
}
