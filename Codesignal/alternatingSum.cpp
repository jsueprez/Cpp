#include <bits/stdc++.h>
using namespace std;

vector<int> alternatingSums(vector<int> a) {
    auto left = 0;
    auto right = 0;
    vector<int> result;
    for(auto i = 0; i < a.size(); i++){
        if(i % 2 == 0)
           left +=a[i];
        else
            right +=a[i];
    }

    result.push_back(left);
    result.push_back(right);

    return result;
}
