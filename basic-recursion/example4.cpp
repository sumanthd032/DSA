// print N to 1 linearly

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i < 1) return;
    cout << i << endl;
    print(i-1, n);
}

int main() {
    int N;
    cin >> N;
    print(N,N);
    return 0;
}