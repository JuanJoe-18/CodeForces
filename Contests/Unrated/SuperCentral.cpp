#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

struct Dot{
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    vector<Dot> p(n);
    vector<int> rx(n);
    vector<int> lx(n);
    vector<int> uy(n);
    vector<int> dy(n);
    
    for (int i = 0; i<n;i++) cin >> p[i].x >> p[i].y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[j].x >  p[i].x && p[j].y == p[i].y) {
                rx[i]++;
            }
            else if (p[j].x <  p[i].x && p[j].y == p[i].y) {
                lx[i]++;
            }
            else if (p[j].x ==  p[i].x && p[j].y > p[i].y) {
                uy[i]++; 
            }else if (p[j].x ==  p[i].x && p[j].y < p[i].y) {
                dy[i]++;
            } 
        }
        
    }
    int super = 0;

    for (int i = 0; i < n; i++) {
        if(rx[i]> 0 && lx[i]>0 && dy[i]>0 && uy[i]>0){
            super++;
        }   
    }
    cout << super << endl;
    return 0;
}



