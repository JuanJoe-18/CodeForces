//
// Created by juanjoe18 on 7/07/25.
//


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missing_number(vector<int> nums, int n);

int main(){
    int n ;
    cin >> n;
    vector<int>numbers(n-1);  // Solo recibimos n-1 números
    for (int i = 0; i < n-1; ++i) {
        cin >> numbers[i];
    }
    std::cout<<missing_number(numbers,n);
    return 0;

}

int missing_number (vector<int> nums, int n) {
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    // Si llegamos aquí, falta el último número
    return n;
}

