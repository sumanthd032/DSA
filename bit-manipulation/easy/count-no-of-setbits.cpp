// Given an integer n, return the number of set bits (1s) in its binary representation.

#include <bits/stdc++.h>
using namespace std;

// Appproach 1
int countSetBits(int n){
    int count = 0;
    while(n > 0){
        count += n & 1;
        n = n / 2;
    }
    return count;
}

// Approach 2
// int countSetBits(int n){
//     int count = 0;
//     while(n > 0){
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }

int main() {
    int N;
    cin >> N;
    cout << countSetBits(N) << endl;
    return 0;
}