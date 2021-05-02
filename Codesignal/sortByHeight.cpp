#include <bits/stdc++.h>
using namespace std;

vector<int> sortByHeight(vector<int> a) {

    vector<int> copy_v(a.size());

    auto it = copy_if(a.begin(), a.end(), copy_v.begin(),[=](int i){ return i > -1;});
    copy_v.resize(distance(copy_v.begin(), it));

    sort(copy_v.begin(), copy_v.end());

    auto index = 0;

    for(auto i = 0; i < a.size(); i++){
        if(a[i] == - 1)continue;
        else{
            a[i] = copy_v[index];
            index++;
        }
    }

    return a;
}
