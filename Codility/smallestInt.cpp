using namespace std;

#include <algorithm>
#include <vector>

int solution1(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int lowNumber = 1;

    for(int i = 0; i < A.size(); i++ ){

        if(A[i] <= 0)
            continue;

        if(A[i] == lowNumber)
            lowNumber++;
    }

    return lowNumber;

}
