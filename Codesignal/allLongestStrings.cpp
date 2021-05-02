#include <bits/stdc++.h>
using namespace std;


vector<string> allLongestStrings(vector<string> inputArray) {
    sort(inputArray.begin(), inputArray.end(), [](string current, string next){ return current.size() > next.size();});


    vector<string> result;
    result.resize(inputArray.size());
    auto max_lenght = inputArray[0].size();
    auto it = copy_if(inputArray.begin(), inputArray.end(), result.begin(),[=](string current){ return max_lenght == current.size();});

    result.resize(distance(result.begin(),it));

    return result;
}
