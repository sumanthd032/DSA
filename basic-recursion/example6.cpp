// print n to 1 (but dont use i-1)

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    print(i+1, n);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    print(1, N);
    return 0;
}