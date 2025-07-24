// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include <bits/stdc++.h>
using namespace std;

// Bruteforce : O(min(n1,n2))
// int GCD(int n1, int n2){
//     if(n1 == 0) return n2;
//     if(n2 == 0) return n1;
//     int min = ( n1 > n2 ) ? n2 : n1;
//     for(int i = min; i>=1; i--){
//         if(n1 % i==0 && n2%i==0)
//             return i;
//     }
//     return 1;
// }

// Optimal(Euclidean Algo)
int GCD(int n1, int n2){

    while(n2 != 0){
        int temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }
    return n1;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;
    cout << GCD(N1, N2);

    return 0;
}