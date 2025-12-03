#include <bits/stdc++.h>
using namespace std;
set<int> solve( int n);
set<int> divs(int n);
int main (){
    int n;
    cin >> n;
    int sum = (n*(n+1))/2;
    if(sum%2 != 0) cout << "NO";
    else solve(n/2);
    set<int> nums;
    set<int> set1;
    set<int> set2;
    for (int  i =1; i<=n; i++) {
        nums.insert(i);   
    }
    set<int> divisores = divs(n);
    for (int i = 0; i < divisores.size(); i++) {
        if(divisores.find(2) &&)
    }
    
    return 0;
}

set<int> divs(int n){
    set<int> ints;
    for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                ints.insert(i);
            }
    }
    return ints;
}
    
set<int> solve(int n, int sum, set<int> setx ){
    if(n%2 != 0){
        for (int i = n; i != 0; i--) {
            setx.insert(i);      
        }

    }
}

        


