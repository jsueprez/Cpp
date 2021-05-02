#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::map<int, bool> m;

    for( unsigned int i=0; i<list.size() ;i++){
        if(m[sum - list[i]] != 0){
            return std::make_pair(i, distance(list.begin(),find(list.begin(), list.end(), (sum - list[i]))));
        }
        m[list[i]] = true;
    }

    return std::make_pair(-1,-1);
}

/*
 *
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);

    */
