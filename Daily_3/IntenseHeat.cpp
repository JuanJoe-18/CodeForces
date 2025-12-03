#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double maxAvg = 0.0;
    int l = 0; 
    while (l < n) {
        int r = l;     
        double sum = 0; 
        while (r < n) {
            sum += a[r];
            int len = r - l + 1;
            if (len >= k) {
                double avg = sum / len;
                if (avg > maxAvg) {
                    maxAvg = avg;
                }
            }
            r++; 
        }
        l++; 
    }
    
    
    printf("%.15f", maxAvg);
    return 0;
}