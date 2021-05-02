#include <bits/stdc++.h>
using namespace std;

bool areSimilar(vector<int> a, vector<int> b) {

    vector<int> tempA(a.size()),tempB(b.size());

    partial_sort_copy(a.begin(), a.end(),tempA.begin(), tempA.end());
    partial_sort_copy(b.begin(), b.end(), tempB.begin(), tempB.end());

    if(!equal(tempA.begin(), tempA.end(), tempB.begin())) return false;
    auto count_swap = 0;
    for(auto i = 0; i < a.size(); i++){
        if(a[i] != b[i]) count_swap++;
    }

    return (count_swap == 2 || count_swap == 0);

}
