#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const ld EPS = 1e-9;

int sgn(ld x) {
    if (fabsl(x) < EPS) return 0;
    return x < 0 ? -1 : 1;
}

struct PointD {
    ld x, y;
    PointD(ld _x = 0, ld _y = 0) : x(_x), y(_y) {}

    PointD operator+(const PointD& o) const { return {x + o.x, y + o.y}; }
    PointD operator-(const PointD& o) const { return {x - o.x, y - o.y}; }
    PointD operator*(ld k) const { return {x * k, y * k}; }
    PointD operator/(ld k) const { return {x / k, y / k}; }

    bool operator<(const PointD& o) const {
        if (fabsl(x - o.x) > EPS) return x < o.x;
        return y < o.y - EPS;
    }
    bool operator==(const PointD& o) const {
        return fabsl(x - o.x) <= EPS && fabsl(y - o.y) <= EPS;
    }
};

ld dot(PointD a, PointD b) { return a.x * b.x + a.y * b.y; }

PointD get_centroid(const vector<PointD>& pts) {
    PointD sum(0, 0);
    for (const auto& p : pts) sum = sum + p;
    return sum / (ld) pts.size();
}

PointD reflect(PointD p, PointD m, PointD n) {
    ld t = dot(p - m, n) / dot(n, n);
    return p - n * (2.0L * t);
}

bool check_mirror(vector<PointD>& A, vector<PointD>& B) {
    int n = A.size();
    PointD cA = get_centroid(A);
    PointD cB = get_centroid(B);

    if (cA == cB) return false;

    PointD M = (cA + cB) / 2.0L;
    PointD N = cB - cA;

    vector<PointD> refA(n);
    int signA = 0;

    for (int i = 0; i < n; i++) {
        int cur_sgn = sgn(dot(A[i] - M, N));
        if (cur_sgn == 0) return false;
        if (signA == 0) signA = cur_sgn;
        else if (signA != cur_sgn) return false;
        refA[i] = reflect(A[i], M, N);
    }

    for (int i = 0; i < n; i++) {
        int cur_sgn = sgn(dot(B[i] - M, N));
        if (cur_sgn == 0 || cur_sgn == signA) return false;
    }
    sort(refA.begin(), refA.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < n; i++) {
        if (!(refA[i] == B[i])) return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<PointD> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i].x >> A[i].y;
    for (int i = 0; i < n; i++) cin >> B[i].x >> B[i].y;

    if (check_mirror(A, B)) cout << "possible" << endl;
    else cout << "impossible" << endl;
}

int main() {
    fastio
    solve();
    return 0;
}