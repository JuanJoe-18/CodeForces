#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int modpow(int b, int e, int m) {
   if (e == 0) return 1%m;
   long long u = modpow(b,e/2,m);
   u = (u*u)%m;
   if (e%2 == 1) u = (u*b)%m;
   return u;
}

int main(){
    int n; int m;
    cin >> n;
    cin >> m;
    







    return 0;
}