#include <algorithm>
#include<bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    int turn = 0, sereja = 0, dima = 0;
    while(l <= r){
        if(turn % 2 == 0){
            int max = fmax(a[l], a[r]);
            sereja += max;
            if (max == a[l]) {
                l++;
            } else if (max == a[r]) {
                r--;
            }
            turn++;
            
        } else {
            int max = fmax(a[l], a[r]);
            dima += max;
            if (max == a[l]) {
                l++;
            } else if (max == a[r]) {
                r--;
            } 
            turn++;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}