#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>
#include <limits>

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    vector<int> pre_sum;
    int s = 0;
    for (auto i: A) {
        s += i;
        pre_sum.push_back(s);
    }

    int min_abs_diff = numeric_limits<int>::max();
    for (size_t i = 1; i < pre_sum.size(); i++) {
        int abs_diff = abs(pre_sum[i - 1] * 2 - pre_sum[pre_sum.size() - 1]);
        min_abs_diff = min(min_abs_diff, abs_diff);
    }

    return min_abs_diff;
}

int solutionPreSum(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    vector<int> pre_sum;
    int s = 0;

    for(auto i : A){
        s += i;
        pre_sum.push_back(s);
    }

    int minimum = numeric_limits<int>::max();

    for(unsigned int i = 0; i < A.size(); i++){
        int mini = abs(pre_sum[i] - (pre_sum[pre_sum.size() - 1] - pre_sum[i]));
        minimum = min(minimum, mini);
    }

    return minimum;
}
