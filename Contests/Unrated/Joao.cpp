#include<bits/stdc++.h>
#include <map>
using namespace std;
typedef long long ll;
int main(){
    map<int, int> freq;
    for (int i = 0; i < 10; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }
    ll tasks = 0;
    for (int i = 1; i <= 4; i++) { 
        if(!freq[i]){
            tasks++;
        }
    }
    cout << tasks << endl;
    return 0;
}