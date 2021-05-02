#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> solutionMaxCounter(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    vector<int> result(N, 0);

    int i= 0;

    for(auto counter : A){
        if(counter >= 1 && counter <= N){
            result[counter - 1] += 1;
        }

        if(counter == N + 1){
            std::vector<int>::iterator max;
            max = std::max_element(result.begin(), result.end());
            result.assign(N, *max);
        }
        i++;
    }

    return result;
}
