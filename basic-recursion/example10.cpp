// check whether a string is palindrome

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string& s){
    if(i >= s.size()/2) return true;
    if(s[i] != s.size()-i-1) return false;
    return checkPalindrome(i, s);
}

int main(){
    string S;
    cin >> S;
    cout << (checkPalindrome(0, S) ? "true": "false");
    return 0;
}