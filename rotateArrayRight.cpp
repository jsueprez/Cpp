#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution2(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    if(A.empty()) return A;

    while(K != 0){
        rotate(A.begin(), A.end() - 1, A.end());
        K--;
    }

    return A;
}
