// Program to convert decimal to binary

#include <bits/stdc++.h>
using namespace std;

// O(log2n)
string toBinary(int n){
    if (n == 0) return "0"; 
    string res = "";
    while(n > 0){
        res += n%2 + '0';
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

// using recursion
// void toBinary(int n) {
//     if (n == 0) return;
//     toBinary(n / 2);
//     cout << n % 2;
// }

// using bitset
// string toBinary(int n){
//     string s = bitset<32>(n).to_string();
//     return s.erase(0, s.find_first_not_of('0'));
// }

int main() {
    int n;
    cin >> n;
    cout << toBinary(n) << endl;
    return 0;
}