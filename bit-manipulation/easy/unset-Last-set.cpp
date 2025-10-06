// Given an integer n, unset (turn off) its rightmost set bit (the least significant 1-bit) and return the new number.

#include <bits/stdc++.h>
using namespace std;

int unsetLastSetBit(int n) {
    return (n & (n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << unsetLastSetBit(n) << endl;
    return 0;
}