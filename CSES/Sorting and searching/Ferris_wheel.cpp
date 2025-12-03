#include <bits/stdc++.h>
using namespace std;
struct gondola{
    int child_1;
    int child_2;
};

int main() {
    int n, x;
    cin >> n >> x;
    multiset<int> c;
    for (int i = 0; i < n; i++) {
        int child; cin >> child;
        c.insert(child);
    }
    int g = 0;
    while (!c.empty()) {
        auto it_low = c.begin();
        auto it_high = prev(c.end());
        if (it_low == it_high) {
            g++;
            c.erase(it_low);
        } else if (*it_low + *it_high <= x) {
            g++;
            c.erase(it_low);
            c.erase(it_high);
        } else {
            g++;
            c.erase(it_high);
        }
    }
    cout << g << endl;
    return 0;
}

