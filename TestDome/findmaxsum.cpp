#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

int findMaxSum(const std::vector<int>& numbers)
{
    // write your code in C++11 (g++ 4.8.2)
    std::vector<int> copy;
    copy.resize(numbers.size());

    memcpy(copy.data(), numbers.data(), numbers.size() * sizeof(int));

    std::nth_element(copy.begin(), copy.begin() + 1, copy.end(), std::greater<int>{});

    return copy[0] + copy[1];

}
