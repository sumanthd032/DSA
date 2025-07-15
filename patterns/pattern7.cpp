#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i=1; i<=n; i++){
        // Spaces
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        // Stars
        for(int k=0; k<2*(i-1)+1; k++){
            cout << "*";
        }
        // Spaces
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern7(n);
}