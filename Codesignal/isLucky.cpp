#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n) {

    vector<int> temp;
    vector<int> result;
    for (const auto digit : std::to_string(n)) {
        temp.push_back(digit - '0');
    }

    result.resize(temp.size());

    partial_sum(temp.begin(),temp.end(), result.begin());

    return result[(result.size()/2) - 1] == result[result.size()-1] - result[(result.size()/2) - 1];
}
