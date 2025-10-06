// Given two integers a and b, swap them in-place using only 2 variables (without using a temporary variable).

#include <bits/stdc++.h>
using namespace std;

// using temporary variable
// void swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// using addition & subtarction
// void swap(int& a, int& b){
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

void swap(int& a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}