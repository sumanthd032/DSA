// Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include <bits/stdc++.h>
using namespace std;

//bruteforce
// bool isSorted(vector<int>& arr){
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i] > arr[j]) 
//                 return false;
//         }
//     }
//     return true;
// }

// optimal
bool isSorted(vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    cout << isSorted(arr) ;
    return 0;
}