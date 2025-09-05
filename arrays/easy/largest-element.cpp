// Given an array, we have to find the largest element in the array.

#include <bits/stdc++.h>
using namespace std;

// bruteforce
int largest(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return(arr[arr.size()-1]);
}

// optimal
int largest(vector<int>& arr){
    int max = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    cout << "Largest element is " << largest(arr) << endl;
    return 0;
}