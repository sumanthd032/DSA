// Given an integer n, return true if it is a power of two. Otherwise, return false. An integer n is a power of two if there exists an integer x such that n == 2ˣ.

#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    return (n > 0) && (n & (n-1)) == 0;
}

int main() {
    int n;
    cin >> n;
    cout << isPowerOf2(n) << endl;
    return 0;
}