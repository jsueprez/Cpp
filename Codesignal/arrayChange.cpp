#include <bits/stdc++.h>
using namespace std;

int arrayChange(vector<int> inputArray) {

    auto count = 0;

    for(auto i =0; i < inputArray.size()-1; i++){
        while(inputArray[i] >= inputArray[i+1]){
            inputArray[i+1]++;
            count++;
        }


    }

     return count   ;
}
