#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
    vector<int> temp (inputArray.size());

    adjacent_difference(inputArray.begin(), inputArray.end(), temp.begin(), [](int a, int b){ return a*b;});


    return *max_element(temp.begin() +1 , temp.end());
}
