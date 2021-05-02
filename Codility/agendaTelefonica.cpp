#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>
bool compareFunction (std::string a, std::string b) {return a<b;}

string solution(vector<string> &A, vector<string> &B, string &P) {
    // write your code in C++14 (g++ 6.2.0)

    std::vector<string>::iterator it;
    std::vector<string> names;
    std::string name;

    int s = 0;
    for( auto number : B){
        if(number.find(P,0) != std::string::npos){
                names.push_back(A[s]);
        }
        s++;
    }

    sort(names.begin(),names.end(),compareFunction);

    return names.empty() ? "NO CONTACT" : names[0];

}
