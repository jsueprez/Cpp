#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution5(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)

    if(D > Y) return 1;
    if(X == Y) return 1;

    if((Y - X) % D == 0){
        return (Y - X) / D;
    }

    return ((Y - X) / D +1);
}
