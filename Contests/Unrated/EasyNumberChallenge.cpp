#include <bits/stdc++.h>
#include <cmath>
#define define ll long long
using namespace std;
const long long mod = pow(2, 30);


int divs(int x){
	int div_num = 0;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) { div_num += i * i == x ? 1 : 2; }
	} 
    return div_num;
}


int main(){
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                sum = (sum + divs(i*j*k)) % mod;
        }  
        }  
    }
    cout << sum << endl;
    return 0;
}





