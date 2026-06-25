#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
    string s; cin >> s;
    sort(s.begin(),s.end());
    int c = 0;
    do {
        c++;
    } while (next_permutation(s.begin(),s.end()));
    cout << c << endl;

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));
    
    


    return 0;
}