#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution6(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 1;

    sort(A.begin(), A.end());

    if(A[0] != 1) return 1;

    for(int i = 0; i < A.size(); i++){
        if(A[i] + 1 != A[i+1])
            return A[i] + 1;

    }

    return 1;
}

int missingElement(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 1;

    int maximo = *max_element(A.begin(), A.end());
    unordered_map<int,int> uM;

    for(auto i = 1; i <= maximo; i++){
        uM[i]=0;
    }

    for(auto &j : A)
        uM[j]++;

    auto it = find_if(uM.begin(), uM.end(), [](const pair<int,int> &map){ return (map.second != 1);});

    if(it != uM.end())
        return it->first;

    return 1;

}

/*
 *
 * Si es solo un missing element se puede hacer lo siguiente:
 * (n(n+1)/2) - Sum(begin, end) =  missing number
 */
