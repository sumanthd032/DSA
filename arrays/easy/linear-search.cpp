// Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

#include <bits/stdc++.h>
using namespace std;

// O(n), O(1)
int linearSearch(vector<int>& arr, int key){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int N, k; 
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    cin >> k;
    cout << linearSearch(a, k);
    return 0;
}