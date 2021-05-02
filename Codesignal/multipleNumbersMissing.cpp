#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int makeArrayConsecutive3(vector<int> statues) {

    sort(statues.begin(), statues.end());

    auto low_number = 2;
    auto numbers_missing = 0;
    for(auto i = 0; i <= statues.size(); i++){
        if(statues[i] - i != low_number){
            numbers_missing++;
            while(low_number < statues[i] - i)
                low_number++;
        }

    }

    return numbers_missing;
}

int makeArrayConsecutive2(vector<int> statues) {

    sort(statues.begin(), statues.end());

    auto low_number = statues[0];
    auto numbers_missing = 0;
    for(auto i = 0; i < statues.size(); i++){
        if(statues[i] - i != low_number){
            while(low_number < statues[i] - i){
                numbers_missing++;
                low_number++;
            }
        }

    }
    return numbers_missing;


}
