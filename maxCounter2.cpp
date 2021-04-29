#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

vector<int> solutionMaxCounter2(int N, vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    vector<int> res(N, 0);

    int base = 0;
    int maximum = 0;
    for (int i = 0; i < int(A.size()); i++) {
        if (A[i] != N + 1) {
            res[A[i] - 1] = max(base, res[A[i] - 1]) + 1;
            maximum = max(maximum, res[A[i] - 1]);
        } else {
            base = maximum;
        }
    }

    for (int i = 0; i < N; i++) {
        if (res[i] < base) {
            res[i] = base;
        }
    }
    return res;
}
