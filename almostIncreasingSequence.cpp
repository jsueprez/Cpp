#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool almostIncreasingSequence(std::vector<int> sequence)
{
    auto first_extract = std::adjacent_find(sequence.begin(), sequence.end(), [](int a, int b){ return a>=b;});

    if(distance(sequence.begin(), sequence.end()) < 3)  return true;

    if(*(first_extract - 1) == *(first_extract + 1) || (first_extract + 1 == sequence.end() -1))
        sequence.erase(sequence.begin() + distance(sequence.begin(),first_extract + 1));
    else
        sequence.erase(sequence.begin() + distance(sequence.begin(),first_extract ));

    auto result = is_sorted(sequence.begin(), sequence.end(), less_equal<int>{});

    return result;
}
