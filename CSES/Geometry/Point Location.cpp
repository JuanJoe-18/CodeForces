#include<iostream>
#include<vector>
using namespace std;

long long crossProduct(vector<long long> v1, vector<long long> v2);
string solve(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << solve(x1, y1, x2, y2, x3, y3) << '\n';
    }
    return 0;
}

string solve(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3) {
    long long cp = (x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1);
    if (cp > 0) return "LEFT";
    if (cp < 0) return "RIGHT";
    return "TOUCH";
}


