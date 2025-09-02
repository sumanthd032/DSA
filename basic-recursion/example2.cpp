// print name n times

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i > n){
        return;
    }
    cout << "Arun" << endl;
    print(i+1,n);
}

int main() {
    int N;
    cin >> N;
    print(1, N);
    return 0;
}