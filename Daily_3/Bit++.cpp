#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x = 0;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        if (s == "++X" || s == "X++") {
            ++x;
        } else if (s == "--X" || s == "X--") {
            --x;
        }
    }

    cout << x << '\n';



    return 0;
}