#include<iostream>
#include<vector>
#include<map>
using namespace std;

struct Queri {
    int k, l, r;
};

long f(int k, vector<int> a, int l , int r);

int main(){
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++){
    int n,q;
    vector<int> a;
    vector<Queri> quries;
    std::cin >> n;
    std::cin >> q;
    
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    for (int i = 0; i < q; i++)
    {
        int k,l,r;
        cin >> k >> l >> r;
        quries.push_back({k,l,r});
    }
    for (int i = 0; i < q; i++)
    {
        cout << f(quries[i].k, a, quries[i].l, quries[i].r) << endl;
    }
      
    }
    return 0;
}

long f(int k, vector<int> a, int l , int r){
    long ans = 0;
    for (int i = l - 1; i <= r - 1; i++) {
        while (k % a[i] == 0) {
            k /= a[i];
        }
        ans += k;
    }
    return ans;
}





