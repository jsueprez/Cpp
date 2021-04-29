#include <bits/stdc++.h>

using namespace std;

#include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
string solutionTEst(string &S)
{
    // write your code in C++14 (g++ 6.2.0)

    size_t count = std::count_if(S.begin(), S.end(),
                                 [](char c) { return std::isdigit(c); });

    string format_number;
    int terna = 0;
    int last = (count / 3) - 1;
    int groups = 0;
    int totalNumbersAdded = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (!isdigit(S[i]))
            continue;

        format_number += S[i];
        totalNumbersAdded++;
        terna++;

        if (terna == 3 || (terna == 2 && groups >= last))
        {
            groups++;
            terna = 0;
            if (totalNumbersAdded < count)
            {
                format_number += "-";
            }
        }
    }

    return format_number;
}
