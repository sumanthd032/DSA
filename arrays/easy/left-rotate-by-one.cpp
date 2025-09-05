//Given an array of N integers, left rotate the array by one place.

#include <bits/stdc++.h>
using namespace std;

// optimal: O(n), O(1)
void leftRotate(vector<int>& arr){
    int firstElement = arr[0];
    for(int i=1; i< arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = firstElement;
}

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    leftRotate(v);
    cout << "After left rotation: " << endl;
    for(auto it: v){
        cout << it << " ";
    }
    return 0;
}