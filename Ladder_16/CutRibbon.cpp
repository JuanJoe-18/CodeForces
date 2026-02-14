#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int ans = 0;

    for (size_t x = 0; (a*x <= n); x++) {
        for (size_t y = 0;  (a*x + b*y <= n); y++){
            int r =  n - (a*x + b*y);
            if (r % c == 0){
                int z = r/c;
                ans = fmax(ans,x+y+z);
                
            }
        }
    }

    cout << ans << endl;

    return 0;
}