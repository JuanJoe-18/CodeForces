#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long div_det(long x);
string tprime_det(long x);
int main(){
    int n;
    cin >> n;
    vector<long> a(n);
    for (long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (long number: a) {
        cout << tprime_det(number) << endl;
    }
    return 0;
}

long div_det(long x){
    long count = 0;
    for (long i = 0; i < x; i++)
    {
        if(x % (i+1) == 0) {
            count++;
        }
    }
    return count;
}

string tprime_det(long x){
    if (div_det(x) == 3)
    {
        return "YES";
    }
    return "NO";
}
