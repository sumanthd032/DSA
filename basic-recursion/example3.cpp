// print linearly from 1 to N

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i > n) return;
    cout << i << endl;
    print(i+1, n);
}

int main() {
    int N;
    cin >> N;
    print(1, N);
    return 0;
}