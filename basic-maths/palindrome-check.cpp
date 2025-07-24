#include <bits/stdc++.h>
using namespace std;


// Bruteforce O(logn)
// bool checkPalindrome(int n){
//     string s = to_string(n);  // O(log10(n))
//     string orig = s;
//     reverse(s.begin(), s.end());   // O(log10(n))
//     if(s == orig)
//         return true;
//     return false;
// }

// Optimal (O(logn))
bool checkPalindrome(int n){
    if(n < 0 || (n%10)==0 && n!=0)
        return false;
    
    int rev = 0;
    while(n > rev){
        rev = (rev*10) + (n%10);
        n /= 10;
    }
    return (n == rev) || (n == rev/10);
}

int main() {
    int N;
    cin >> N;
    string res = checkPalindrome(N)?"true":"false";
    cout << res << endl;
    return 0;
}