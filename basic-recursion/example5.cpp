// print from 1 to N (dont use i+1)

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i < 1) return;
    print(i-1, n);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    print(N, N);
    return 0;
}