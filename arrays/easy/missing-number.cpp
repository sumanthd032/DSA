// Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr){
    int n = arr.size();
    int arraySum = 0;
    int expectedSum = (n*(n+1))/2;
    for(int i=0; i<n; i++){
        arraySum += arr[i];
    }
    return expectedSum - arraySum;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0 ; i<N; i++){
        cin >> arr[i];
    }
    cout << missingNumber(arr) << endl;
    return 0;
}