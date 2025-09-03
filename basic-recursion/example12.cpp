// tower of hanoi

#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char from, char to, char temp){
    if(n == 0) return;
    TOH(n-1, from, temp, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    TOH(n-1, temp, to, from);
}

int main() {
    int N;
    cin >> N;
    TOH(N, 'A', 'C', 'B');
    cout << "Total moves = " << (pow(2, N) - 1) << endl;
    return 0;
}