#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int threeCharsDistinct(string s) {
    auto count = 0;

    for(auto i = 0; i< s.size(); i++){
        auto temp = s.substr(i, 3);
        if(temp.size()<3) break;
        if(adjacent_find(temp.begin(), temp.end()) != temp.end()){

        }else
            count ++;
    }

    return count;

}

/*std::string s = "abcdaaae";
threeCharsDistinct(s);*/
