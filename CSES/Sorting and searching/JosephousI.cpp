#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    list<int> s;
    for (int i = 1; i <= n; i++) s.push_back(i);

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    auto it = s.begin();
    ++it;

    while (s.size() > 0) {
        if (it == s.end()) it = s.begin();

        cout << *it << (s.size() == 1 ? '\n' : ' ');

        auto next_it = next(it);
        s.erase(it);

        it = next_it;
        if (it == s.end()) it = s.begin();

        if (!s.empty()) {
            ++it;
            if (it == s.end()) it = s.begin();
        }
    }

    return 0;
}