#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

int lis(int n, vector<int> a, vector<int> length) {
    for(int i=0;i<n;i++) cin >> a[i];
    for (int k = 0; k < n; k++) {
        length[k] = 1;
        for (int i = 0; i < k; i++) {
            if (a[i] < a[k]) {
                length[k] = max(length[k],length[i]+1);
            }
        }
    }

    return *max_element(all(length));
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> length(n);
    cout <<  lis(n, a, length) << endl;
}
