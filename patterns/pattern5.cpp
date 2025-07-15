#include<bits/stdc++.h>
using namespace std;

// void pattern6(int n){
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern6(n);
}