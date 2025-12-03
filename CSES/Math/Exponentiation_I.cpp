#include<bits/stdc++.h>
#include <iterator>
#define ll long long;
const long long MOD = 1000000007; // Ojo son 8 ceros y unsiete
using namespace std;
int modpow(int a, int b, int m);

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
		long long solve = modpow(a,b,MOD);
		cout << solve << endl;
	}
}

int modpow(int x, int n, int m) {
   if (n == 0) return 1%m;
   long long u = modpow(x,n/2,m);
   u = (u*u)%m;
   if (n%2 == 1) u = (u*x)%m;
   return u;
}