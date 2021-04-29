/*https://www.youtube.com/watch?v=KprMBH3Iq88*/

#include <set>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>
int solutionFrog(int X, vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    set<int> s;
    for (size_t i = 0; i < A.size(); i++) {
        s.insert(A[i]);
        if (s.size() == X) return i;
    }

    return -1;
}
