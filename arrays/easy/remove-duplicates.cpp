//Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

#include <bits/stdc++.h>
using namespace std;

// bruteforce : O(nlogn + n)
// int removeDuplicate(vector<int>& arr){
//     set<int> s;
//     for(int i=0; i<arr.size(); i++){
//         s.insert(arr[i]);
//     }
//     int j = 0;
//     for(int x: s){
//         arr[j++] = x;
//     }
//     return s.size();
// }

// optimal(two pointer method) : O(n)
int removeDuplicate(vector<int>& arr){
    int i = 0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    int k = removeDuplicate(v);
    cout << "Number of originals: " << k << endl;
    for(int i=0; i<k ; i++){
        cout << v[i] << " ";
    }

    return 0;
}