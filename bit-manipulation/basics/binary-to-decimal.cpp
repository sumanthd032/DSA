// Program to convert binary to decimal

#include <bits/stdc++.h>
using namespace std;

int toDecimal(string n){
    int res = 0;
    int multiplier = 0;
    for(int i= n.size()-1; i>=0; i--){
        res += (n[i]-'0') * pow(2,multiplier++);
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << toDecimal(s);
    return 0;
}