#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solutionPermutation(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    sort(A.begin(), A.end());

    if(A[0]!= 1) return 0;
    if(A.size() == 1) return 1;

     for(unsigned int i = 1; i < A.size(); i++ ){
        if(A[i] != (A[i - 1] + 1)) return 0;
     }

     return 1;

}
