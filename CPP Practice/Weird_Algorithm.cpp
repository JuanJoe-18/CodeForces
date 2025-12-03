// //
// // Created by juanjoe18 on 5/07/25.
// //
//
// #include "Weird_Algorithm.h"
#include <iostream>
using namespace std;
int main() {
    int n ;
    std::cin>> n;
    cout << n << "\n";
    while (n > 1)
    {
        if (n % 2 == 0)
            {
            n/=2;
        }else
        {
            n = (n * 3) + 1;
        }
        cout << n << "\n";
    }
return 0;
}