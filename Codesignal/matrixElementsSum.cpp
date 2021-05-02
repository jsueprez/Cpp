#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int matrixElementsSum(vector<vector<int>> matrix) {
    auto result = 0;
    //accumulate(matrix[0].begin(), matrix[0].begin(), result);
    auto count = matrix.size();

    for(auto i = 0 ; i < count; i++){
        result += accumulate(matrix[i].begin(), matrix[i].end(), 0);
        if(i != count -1)
            std::transform (matrix[i].begin(), matrix[i].end(), matrix[i+1].begin(),matrix[i+1].begin(), [](int a, int b){ return a == 0 ? b * a : b;});

    }

    return result;

}
