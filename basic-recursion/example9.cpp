// program to reverse an array

#include <bits/stdc++.h>
using namespace std;

// method 1
void rev1(int l, int r, vector<int>& a){
    if(l >= r) return;
    swap(a[l], a[r]);
    rev1(l+1, r-1, a);
}

// method 2
void rev2(int i, vector<int>& a, int n){
    if(i >= n/2) return;
    swap(a[i], a[n-i-1]);
    rev2(i+1, a, n);
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    // rev1(0, N-1, arr);

    rev2(0, arr, N);
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}