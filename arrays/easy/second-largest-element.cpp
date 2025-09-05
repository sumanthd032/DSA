// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

#include <bits/stdc++.h>
using namespace std;

// bruteforce
// int secondLargest(vector<int>& arr){
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     for(int i=n-1; i>=0; i--){
//         if(arr[i] != arr[n-1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// better
// int secondLargest(vector<int>& arr){
//     int largest = arr[0];
//     int sLargest = INT_MIN;
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] > sLargest && arr[i] != largest){
//             sLargest = arr[i];
//         }
//     }
//     return sLargest;
// }

// optimal 
int secondLargest(vector<int> & arr){
    int largest = arr[0];
    int sLargest = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > largest ){
            sLargest = largest;
            largest = arr[i];
        }else if(arr[i]< largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    cout << "Second largest element is: " << secondLargest(v);
    return 0;
}