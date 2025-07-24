#include <bits/stdc++.h>
using namespace std;

// Bruteforce & Optimal
int reverseNumber(int n){
    int sign = (n>0) ? 1:-1;
    int rev = 0;
    n = abs(n);
    while(n>0){
        int digit = n%10;
        rev = (rev*10) + digit;
        n /= 10;
    }
    return rev*sign;
}

int main() {
    int n;
    cin >> n;

    cout << reverseNumber(n) << endl;

    return 0;
}