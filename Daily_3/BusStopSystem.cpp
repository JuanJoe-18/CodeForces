#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    vector<int> s(n + 1); 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + a[i - 1];  
    }

    auto itm = min_element(s.begin(),s.end());
    auto itM = max_element(s.begin(),s.end());

    int m = *itm;
    int M = *itM;

    int li = -m;
    int ls = w - M;

    //for(int i = li; i <= ls; i++) cout << i<<  " ";

    if(li>ls) {
        cout << 0 << endl;
        return 0;
    }else cout << ls-li +1;    
    

    return 0;
}