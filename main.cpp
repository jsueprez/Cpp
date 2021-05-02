#include <bits/stdc++.h>
using namespace std;



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
    std::vector<string> A {"abc",
                        "ded"};

    vector<int> a ={1, 1, 1};
    vector<int> b ={2, 1, 1};

    string s1 = "zaa";
    string s2 = "adcaa";
    int n = 1230;

    //palindromeRearranging(s1);

    return 0;
}
