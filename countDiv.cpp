#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solutionCountdiv(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
       return ( B/K - A/K + !(A%K) );

}
