#include <bits/stdc++.h>
using namespace std;


int nextPrime(int n) {
    int temp = n +1 ;

    if(n == 2) return 3;
    if(n == 3) return 5;

    while(1){

        bool isPrime= true;
        for(auto i = 2; i <= n/2; i++){
            if(temp % i ==0){
                isPrime = false;
                break;
            }
        }

        if(isPrime) return temp;
        temp ++;
    }

    return n;
}
