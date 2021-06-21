#include <bits/stdc++.h>
using namespace std;


int previousPrime(int n) {

    int temp = n  - 1 ;

    while(temp >= 2){

        bool isPrime= true;
        for(auto i = 2; i <= n/2; i++){
            if(temp % i ==0){
                isPrime = false;
                break;
            }
        }

        if(isPrime) return temp;
        temp --;
    }

    return n;
}

vector<int> eratosthenesSieve(int n) {
    vector<int> result(0);
    int currentPrime = n;

    bool firstIsPrime= true;

    if(n <= 1) return result;

    for(auto i = 2; i <= n/2; i++){
        if(n % i ==0){
            firstIsPrime = false;
            break;
        }
    }

    if(firstIsPrime) result.push_back(n);

    while(currentPrime > 2){
        currentPrime = previousPrime(currentPrime);
        result.push_back(currentPrime);
    }

    sort(result.begin(), result.end());

    return result;
}

//eratosthenesSieve(9);
