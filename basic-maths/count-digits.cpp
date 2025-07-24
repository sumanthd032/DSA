#include <bits/stdc++.h>
using namespace std;

// Bruteforce
int countDigits(int n){
    if (n==0) return 1;

    n = abs(n);  // Ignore case

    int count = 0;
    while(n>0){
        count += 1;
        n = n/10;  // Remove last digit
    }
    return count;
}


// Optimal Approach
// int countDigits(int n){
//     if(n==0) return 1;
//     return floor(log10(abs(n))) + 1;
// }

int main() {
    int n;
    cin >> n;
    
    cout << countDigits(n) << endl;
    return 0;
}