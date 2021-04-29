#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

int binaryGapLongest(int N) {
    int longestGap = 0;
    int gap = 0;
    int ones = 0; // number of 1's detected
    // count longest gap by checking each bit of N
    while( N != 0){
        // check if LSB(N) = 0 or 1
        if(N & 0x01) ones++;
        else if(ones) gap++;
        // Gap is found for every two 1's  detected
        if(ones == 2) {
            ones = 1;
            longestGap = max(longestGap, gap);
            gap = 0; // reset gap
        }
        N = N >> 1;
    }
    return longestGap;
}
