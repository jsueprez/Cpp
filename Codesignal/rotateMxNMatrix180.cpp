#include <bits/stdc++.h>
using namespace std;



vector<vector<int>> rotateMatrix180(vector<vector<int>> m) {
    if(m.empty()) return m;
    size_t r = m.size();
    size_t c = m[0].size();

    for (size_t i = 0; i < r / 2; ++i)
    {
        for (size_t j = 0; j < c; ++j)
            std::swap(m[i][j],m[r - i - 1][c - j - 1]);
    }
    if (r&1)
        for (size_t i = 0; i< c/2; ++i)
            std::swap(m[r/2][i], m[r/2][c-i-1]);

    return m;
}

/*
 * vector<vector<int>> m = {{1, 2, 3, 4},
                             {5, 6, 7, 8}};

    rotateMatrix180(m);


*/
