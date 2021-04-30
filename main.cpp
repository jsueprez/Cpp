#include <bits/stdc++.h>
#include <unordered_map>


using namespace std;

#include <algorithm>
#include <iostream>     // std::cout
#include <numeric>
#include <iostream>
#include <vector>
#include <utility>



int solutionMatrix(vector<int> &A){

    auto width = A.size();
    auto height = width;

    vector<vector<bool>> matrix;

    for(auto colored : A){
        vector<bool> temp(width);
        fill(temp.begin(), temp.begin()+ colored, 1);
        matrix.push_back(temp);
    }

    return 1;

}


int adjacentElementsProduct(vector<int> inputArray) {
    vector<int> temp (inputArray.size());

    adjacent_difference(inputArray.begin(), inputArray.end(), temp.begin(), [](int a, int b){ return a*b;});


    return *max_element(temp.begin() +1 , temp.end());
}

int main()
{
    std::vector<int> A {1, 0, 1, 0, 1000};

    std::cout << adjacentElementsProduct(A) << endl;

    return 0;
}
