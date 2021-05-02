#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solutionPassingCar(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int unos = 0;
    vector<int>::iterator zero;

    for(unsigned int i = 0; i < A.size(); i++)
        if(A[i] != 1) {
            unos += count(A.begin() + i, A.end(), 1);
            if(unos > 1000000000) return -1;

            zero = find(A.begin() + i + 1, A.end(), 0);

            if(zero != A.end()){
                i = distance(A.begin(), zero) - 1;
            }else{
                break;
            }
        }

    return unos ;

}

int solutionPassingCar100(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int car_east = 0;
    int passed_cars = 0;

    for(auto i : A)
        if(i == 1) {
            passed_cars += car_east;
            if(passed_cars > 1000000000) return -1;
        }else{
            car_east+= 1;
        }

    return passed_cars;
}
