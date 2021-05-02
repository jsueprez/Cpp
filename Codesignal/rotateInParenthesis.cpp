#include <bits/stdc++.h>
using namespace std;


string reverseInParentheses(string inputString) {
    stack<char> st;

    for (int i = 0; i < inputString.size(); i++) {

        // Push the index of the current
        // opening bracket
        if (inputString[i] == '(') {
            st.push(i);
        }

        // Reverse the substring starting
        // after the last encountered opening
        // bracket till the current character
        else if (inputString[i] == ')') {
            reverse(inputString.begin() + st.top() + 1,
                    inputString.begin() + i);
            st.pop();
        }
    }

    auto it =remove_if(inputString.begin(), inputString.end(), [](char a){ return a == '(' || a == ')';});

    inputString.resize(distance(inputString.begin(), it));

    return inputString;
}
