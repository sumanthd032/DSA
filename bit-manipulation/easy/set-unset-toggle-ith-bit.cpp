//  Given a positive integer n, set the ith unset (0) bit of its binary representation to 1 and return the resulting integer.

#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int i){
    return (n | (1 << i));
}

int unsetBit(int n, int i){
    return (~(1 << i) & n);
}

int toggleBit(int n, int i){
    return (n ^ (1 << i));
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << setBit(n, i) << endl;
    cout << unsetBit(n, i) << endl;
    cout << toggleBit(n, i) << endl;
    return 0;
}