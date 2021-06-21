#include <bits/stdc++.h>
#include <numeric>      // std::adjacent_difference
using namespace std;

vector<int> prefixSumsToSuffixSums(vector<int> prefixSums) {
    vector<int> result (0);
    vector<int> temp (prefixSums.size());

    adjacent_difference(prefixSums.begin(),prefixSums.end(),temp.begin());
    for(int i =temp.size()-1 ;i >= 0 ; i--){
        result.push_back(accumulate(temp.begin() + i, temp.end(),0));
    }
    reverse(result.begin(), result.end());

    return result;
}

/*
 * vector<int> prefixSums = {1, 3, 6, 10, 15};
    prefixSumsToSuffixSums(prefixSums);

    */
