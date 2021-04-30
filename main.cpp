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




int main()
{
    std::vector<vector<int>> A {{1,1,1,0}, {0,5,0,1}, {2,1,3,10}};

    //std::cout << matrixElementsSum(A) << endl;

    return 0;
}
