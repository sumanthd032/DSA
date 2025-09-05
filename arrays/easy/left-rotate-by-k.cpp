// Given an array of integers, rotating array of elements by k elements either left or right

#include <bits/stdc++.h>
using namespace std;

// bruteforce: O(k) + O(n-k) + O(k) = O(n+k), O(k)
// void leftRotateByK(vector<int>& arr, int k){
//     int n = arr.size();
//     k = k % n;
//     vector<int> temp(k);
//     int i= 0;
//     while(i < k){
//         temp[i] = arr[i];
//         i++;
//     }
//     while(i<n){
//         arr[i-k] = arr[i];
//         i++;
//     }
//     for(int x: temp){
//         arr[i-k] = x;
//         i++;
//     }
// }

// optimal : O(k)+O(n-k)+O(n) = O(2n), O(1)
void leftRotateByK(vector<int>& arr, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    int N, k;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    cin >> k;
    leftRotateByK(v, k);
    cout << "after left rotation by " << k << " positions: " << endl;
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }
    return 0;
}