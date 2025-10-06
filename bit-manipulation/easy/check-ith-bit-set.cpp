// Given two integers n and i, return true if the ith bit in the binary representation of n (counting from the least significant bit, 0-indexed) is set (i.e., equal to 1). Otherwise, return false.

#include <bits/stdc++.h>
using namespace std;

// using bit mask
bool isBitSet(int n, int i){
    return (n & (1 << i)) != 0;
}

// using bit shift
// bool isBitSet(int n, int i){
//     return ((n >> i) & 1) != 0;
// }

int main() {
    int n, i;
    cin >> n >> i;
    cout << isBitSet(n, i);
    return 0;
}