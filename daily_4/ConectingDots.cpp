#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> diff(11, vector<int>(n + 11, 0));
        adj.assign(n + 1, vector<int>());
        visited.assign(n + 1, false);

        while (m--) {
            int a, d, k;
            cin >> a >> d >> k;
            diff[d][a]++;
            int pf = a + (k * d);
            diff[d][pf]--;
        }


        for (int d = 1; d <= 10; ++d) {
            for (int i = 1; i <= n; ++i) {
                if (i - d >= 1) {
                    diff[d][i] += diff[d][i - d];
                }
                if (diff[d][i] > 0 && i + d <= n) {
                    adj[i].push_back(i + d);
                    adj[i + d].push_back(i);
                }
            }
        }

        int cc = 0;
        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                cc++;
                dfs(i);
            }
        }

        cout << cc << endl;

    }

    return 0;
}

/*enunciado
D. Connect the Dots
time limit per test2 seconds
memory limit per test512 megabytes
One fine evening, Alice sat down to play the classic game "Connect the Dots", but with a twist.

To play the game, Alice draws a straight line and marks n
 points on it, indexed from 1
 to n
. Initially, there are no arcs between the points, so they are all disjoint. After that, Alice performs m
 operations of the following type:

She picks three integers ai
, di
 (1≤di≤10
), and ki
.
She selects points ai,ai+di,ai+2di,ai+3di,…,ai+ki⋅di
 and connects each pair of these points with arcs.
After performing all m
 operations, she wants to know the number of connected components†
 these points form. Please help her find this number.

†
 Two points are said to be in one connected component if there is a path between them via several (possibly zero) arcs and other points.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤105
). The description of the test cases follows.

The first line of each test case contains two integers n
 and m
 (1≤n≤2⋅105
, 1≤m≤2⋅105
).

The i
-th of the following m
 lines contains three integers ai
, di
, and ki
 (1≤ai≤ai+ki⋅di≤n
, 1≤di≤10
, 0≤ki≤n
).

It is guaranteed that both the sum of n
 and the sum of m
 over all test cases do not exceed 2⋅105
.

Output
For each test case, output the number of connected components.

Example
InputCopy
3
10 2
1 2 4
2 2 4
100 1
19 2 4
100 3
1 2 5
7 2 6
17 2 31
OutputCopy
2
96
61
Note
In the first test case, there are n=10
 points. The first operation joins the points 1
, 3
, 5
, 7
, and 9
. The second operation joins the points 2
, 4
, 6
, 8
, and 10
. There are thus two connected components: {1,3,5,7,9}
 and {2,4,6,8,10}
.

In the second test case, there are n=100
 points. The only operation joins the points 19
, 21
, 23
, 25
, and 27
. Now all of them form a single connected component of size 5
. The other 95
 points form single-point connected components. Thus, the answer is 1+95=96
.

In the third test case, there are n=100
 points. After the operations, all odd points from 1
 to 79
 will be in one connected component of size 40
. The other 60
 points form single-point connected components. Thus, the answer is 1+60=61
.*/