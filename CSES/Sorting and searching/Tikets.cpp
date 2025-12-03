#include <bits/stdc++.h>
#include <unistd.h>
#include <vector>
using namespace std;

int search(vector<int> &v, int x);;

int main(){
    int n, m;
    cin  >> n >> m;
    multiset<int> t;
    vector<int> c(m);
    for (int i = 0; i < n; i++) {
        int val = 0;
        cin >> val;
        t.insert(val); //insercion en log(n)
    }
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    sort(t.begin(),t.end());
    sort(c.begin(),c.end());

    for (int i = 0; i < m; i++) { 
        int 
        
    }




    return 0;
}



