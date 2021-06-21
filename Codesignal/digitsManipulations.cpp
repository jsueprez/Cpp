#include <bits/stdc++.h>
#include <numeric>      // std::adjacent_difference
using namespace std;

int digitsManipulations(int n) {
    vector<int> result;
    while (n > 0)
    {
        int digit = n%10;
        n /= 10;
        result.push_back(digit);
    }

    auto product = accumulate(result.begin(), result.end(),1, std::multiplies<int>());

    auto sum = accumulate(result.begin(), result.end(),0, std::plus<int>());

    return product - sum;
}

//digitsManipulations(123456);
