#include <bits/stdc++.h>
using namespace std;
//Necesario , posiblemente para muchos problemas de geometría
typedef long long ll;
typedef long long C;
typedef complex<C> P;
#define X real()
#define Y imag()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        // u = (p1,p2)  v = (p1,p3)
        P u = {x2 - x1, y2 - y1};
        P v = {x3 - x1, y3 - y1};

        ll crossP = (conj(u) * v).Y;

        if (crossP == 0)
            cout << "TOUCH" << endl;
        else if (crossP >= 0)
            cout << "LEFT" << endl;
        else
            cout << "RIGHT" << endl;
    }

    return 0;
}
