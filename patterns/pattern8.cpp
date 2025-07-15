#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i=1; i<=n; i++){
        // Spaces
        for(int j=0; j<i-1; j++){
            cout << " ";
        }
        // Stars
        for(int k=0; k<2*n-(2*(i-1)+1); k++){
            cout << "*";
        }
        // Spaces
        for(int j=0; j<i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern8(n);
}