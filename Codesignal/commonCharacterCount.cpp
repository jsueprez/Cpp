#include <bits/stdc++.h>
using namespace std;

int commonCharacterCount(string s1, string s2) {

    auto alphabet_size = 26;
    auto count = 0;
    vector<int> frequencies_s1(26), frequencies_s2(26);

    for(auto i = 0; i < s1.size(); i++){
        frequencies_s1[s1[i] - 'a']++;
    }

    for(auto i = 0; i < s2.size(); i++){
        frequencies_s2[s2[i] - 'a']++;
    }

    for(auto i = 0; i < alphabet_size; i++){
        count+= min(frequencies_s1[i], frequencies_s2[i]);
    }

    return count;
}
