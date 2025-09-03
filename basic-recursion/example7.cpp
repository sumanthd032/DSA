// sum of first n numbers

#include <bits/stdc++.h>
using namespace std;

// using paramterized way
void param_sum(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }
    param_sum(i-1, sum+i);
}

// using functional way
int func_sum(int n){
    if(n == 0)
        return 0;
    return n + func_sum(n-1);
}

int main() {
    int N;
    cin >> N;

    // method 1
    param_sum(N,0);

    //method 2
    cout << func_sum(N);
    return 0;
}