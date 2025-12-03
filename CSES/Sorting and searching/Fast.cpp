#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) cin >> d[i];
    // Precompute prefix sums for 2n elements (circular)
    vector<long long> prefix(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; ++i) {
        prefix[i + 1] = prefix[i] + d[i % n];
    }
    for (int start = 0; start < n; ++start) {
        int ads = 0;
        int pos = start;
        while (pos - start < n - 1) {
            // Find the minimal j such that prefix[j] - prefix[pos] >= c
            int low = pos + 1, high = start + n, next = high;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (prefix[mid] - prefix[pos] >= c) {
                    next = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            if (next - start >= n) break;
            ++ads;
            pos = next;
        }
        cout << ads << (start == n - 1 ? '\n' : ' ');
    }
    return 0;
}