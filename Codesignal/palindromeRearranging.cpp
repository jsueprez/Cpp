#include <bits/stdc++.h>
using namespace std;

bool palindromeRearranging(string inputString) {
    unordered_map<char, int> m;

    /*A set of characters can form a palindrome if at most one character occurs odd(impar) number of times and all characters occur even number of times.*/
    auto odd = 0;
    auto even = 0;
    auto count = 0;
    for(auto i : inputString)
        m[i]++;

    for(auto mapis : m){
        if(mapis.second % 2 != 0)
            odd++;

        if(odd > 1) return false;
    }

    return true;

}
