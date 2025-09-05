// Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
#include <bits/stdc++.h>
using namespace std;

// Brute force: O((m+n) log(m+n)), O(m+n)
// vector<int> unionArrays(vector<int>& arr1, vector<int>& arr2){
//     set<int> ans(arr1.begin(), arr1.end());
//     ans.insert(arr2.begin(), arr2.end());
//     return vector<int>(ans.begin(), ans.end());
// }

// Optimal two-pointer: O(m+n), O(1) 
vector<int> unionArrays(vector<int>& arr1, vector<int>& arr2){
    int m = arr1.size();
    int n = arr2.size();
    vector<int> ans;
    int i = 0, j = 0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else{
            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i < m){
        if(ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }
    while(j < n){
        if(ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main() {
    int m, n;
    cin >> m >> n; 
    vector<int> a1(m), a2(n);
    for(int i=0; i<m; i++) cin >> a1[i];
    for(int j=0; j<n; j++) cin >> a2[j];

    vector<int> ans = unionArrays(a1, a2);
    for(int x : ans) cout << x << " ";
    cout << "\n";
    return 0;
}
