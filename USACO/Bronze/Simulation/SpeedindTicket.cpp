#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("speeding.in");
    ofstream fout("speeding.out");

    int N, M;
    fin >> N >> M;

    vector<int> limit(101, 0), bessie(101, 0);

    int pos = 1;
    for (int i = 0; i < N; i++) {
        int len, sp;
        fin >> len >> sp;
        for (int j = 0; j < len; j++) {
            limit[pos++] = sp;
        }
    }

    pos = 1;
    for (int i = 0; i < M; i++) {
        int len, sp;
        fin >> len >> sp;
        for (int j = 0; j < len; j++) {
            bessie[pos++] = sp;
        }
    }

    int ans = 0;
    for (int mile = 1; mile <= 100; mile++) {
        ans = max(ans, bessie[mile] - limit[mile]);
    }

    fout << ans << "\n";
    return 0;
}

/*

YNYN

*/