#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> commands;
vector<int> a;


void op(int i, int j) {
    commands.emplace_back(i,j);
    int s = a[i] + a[j];
    a[i] = s/2;
    a[j] = (s + 1) /2;
}

void merge (int l , int m, int r) {
    if (a[m] <=  a[m + 1]) return;
    int i = m;
    int j = m+1;
    bool c  = false;
    while (i >= l &&  j <= r && a[i] > a[j]) {
        op(i,j);
        i--; j++;
        c = true;
    }

    if (c) {
        if (l < m) merge(l,(l + m)/2,m);
        if ( m + 1 < r) merge(m + 1, (m + 1 + r)/2,r );
        if (a[m] > a[ m + 1]) merge (l,m,r);
    }
}


void sortt(int l , int r) {
    if (l >= r) return;
    int  m =  l +(r-l)/2;
    sortt(l,m);
    sortt(m+1,r);
    merge(l,m,r);
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sortt(1,n);

    cout << commands.size() << endl;
    for (const auto& [i,j] : commands) {
        cout << i << " " << j << endl;
    }

    for (int w: a ) cout << w << " ";
    cout << endl;
    return 0;
}