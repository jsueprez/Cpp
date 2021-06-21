#include <bits/stdc++.h>
using namespace std;


int killKthBit(int n, int k) {
    n &= ~(1U << (k - 1));
    return n;
}

// killKthBit(37,3);
