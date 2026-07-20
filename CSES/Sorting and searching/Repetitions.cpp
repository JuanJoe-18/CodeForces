#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm>

using namespace std;

int solve(string cat){
   int actual = 1;
   int maximo = 0;
   for(int i = 0; i< cat.length(); i++){
    if (cat[i] == cat[i+1])
    {
        actual++;
        maximo = fmax(actual,maximo);
    }else{
        actual = 1;
    }
   }
   return maximo == 0 ? 1 : maximo;
}


int main(){
    string s;
    cin >> s;
    cout<< solve(s) << endl;
    return 0;
}

