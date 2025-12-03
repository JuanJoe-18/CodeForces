#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1, 0);        
    vector<int> prefix(n + 1, 0);   

    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        prefix[i] = prefix[i - 1] + h[i];
    }

    int minSum = INT_MAX, pos = 1;

    for (int i = k; i <= n; i++) {
        int sum = prefix[i] - prefix[i - k]; 
        if (sum < minSum) {
            minSum = sum;
            pos = i - k + 1; 
        } 
    }
    cout << pos << endl;
    return 0;
}