#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll fact = 1;
    for (ll i = 2; i <= n; ++i) {
        fact *= i;
    }
    string s = to_string(fact);
    int zeros = 0;
    for (int i = s.size() - 1; i >= 0 && s[i] == '0'; --i) {
        ++zeros;
    }
    cout << zeros << endl;
    return 0;
}