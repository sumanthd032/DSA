// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

#include <bits/stdc++.h>
using namespace std;

// optimal(2 pointer approach): O(n), O(1)
void moveZeroes(vector<int>& arr){
    int n = arr.size();
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    if(j == -1) return;
    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// better: O(n)+O(no of zeroes), O(1)
// void moveZeroes(vector<int>& arr){
//     int zeroCount = 0;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         if(arr[i] != 0){
//             arr[i-zeroCount] = arr[i];
//         }else{
//             zeroCount++;
//         }
//     }
//     for(int i=n-zeroCount; i<n; i++){
//         arr[i] = 0;
//     }
// }

// bruteforce: O(n) + O(no. of zeroes) + O(n- no.of zeroes) = O(2n), O(n)
// void moveZeroes(vector<int>& arr){
//     vector<int> temp;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         if(arr[i] != 0) temp.push_back(arr[i]);
//     }
//     for(int i=0; i<temp.size(); i++){
//         arr[i] = temp[i];
//     }
//     for(int i=temp.size(); i<n; i++){
//         arr[i] = 0;
//     }
// }

int main() {
    int N; 
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    moveZeroes(v);
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }
    return 0;
}