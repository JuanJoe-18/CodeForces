#include<bits/stdc++.h>
using namespace std;
struct Movie {
    int start, end;
};

bool compareM(const Movie& a, const Movie& b) {
    return a.end < b.end;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;

    vector<Movie> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].start >> v[i].end;
    }
    sort(v.begin(), v.end(), compareM);

    int count = 0;
    int c_i_end = 0;

    for (int i = 0; i < n; i++) {
        if (v[i].start >= c_i_end) {
            count++;
            c_i_end = v[i].end;
        }
    }

    cout << count << endl;

    return 0;
}