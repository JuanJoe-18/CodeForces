#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char d, dot;
    int dollars, cents;
    scanf(" %c%d%c%d", &d, &dollars, &dot, &cents);
    int total = dollars * 100 + cents;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        scanf(" %c%d%c%d", &d, &dollars, &dot, &cents);
        total += dollars * 100 + cents;
        if (total % 100 != 0) {
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}