#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// return the sum of all natural number up to n
// if n=10 = 1+2+3+4+5+6+7+8+9+10 Using formula O(1)
// if n=0 = 0
// if n>0 1+2+3+4+5+6.....+(n-1)+n = Sum(n-1) + n
int sumAllnumber( int A){
    return ((A * (A+1))/2);
}
// Using recursion O(n)
int sumAllnumberRecursion( int A){
    if(A == 0)
        return 0;
    else
        return sumAllnumberRecursion(A-1)+ A;
}

// Factorial of a number
// n!= 1**2*3*4....*n
// 5! = 1*2*3*4*5=120
// 0!=1
// 1!= 1
int factorialNum(int A){
    if(A == 1)
        return 1;
    else
        return factorialNum(A-1)*A;
}

//Fibonacci O(2^n) too expensive time, this way is excesive recursion, becuase is called multiple times with the same parameter.
// n = 0 -> 0
// n = 1 -> 1
// n > 1 -> fib(n-2) + fib(n-1)
int fib(int n){
    if(n <= 1)
        return n;

    return fib(n-2) + fib(n-1);
}

//Fibonacci O(n) Using memoization
// n = 0 -> 0
// n = 1 -> 1
// n > 1 -> fib(n-2) + fib(n-1)
int f[10];
int fibMemoization(int n){
    if(n <= 1){
        f[n]=n;
        return n;

    }
    if(f[n-2] == -1)
        f[n-2] = fibMemoization(n-2);
    if(f[n-1] == -1)
        f[n-1] = fibMemoization(n-1);

    return f[n-2]+f[n-1];

}

int func(int n)
{

    static int i = 1;
    if (n>=5)return n;
    n = n+i;
    i++;
    return func(n);

}

void foo (int n, int sum)
{

    int k = 0, j = 0;
    if (n == 0) return;
    k = n % 10;
    j = n/10;
    sum = sum + k;
    foo (j, sum);
    printf("%d", k);

}

int func2 (int &x, int c)
{

    c = c - 1;
    if (c == 0) return 1;
    x = x + 1;
    return func2(x,c) * x;

}

int func3 (int n)
{

    int x=1, k;
    if (n==1) return x;
    for (k=1; k<n; ++k)
        x=x + func3 (k) * func3 (n - k);

    return x;

}

void func4(int n)
{
    static int d = 1;
    std::cout << n << std::endl;
    std::cout << d << std::endl;
    d++;
    if (n > 1) func4 (n-1);
    std::cout << d << std::endl;

}


//std::cout << func(1) << std::endl;
/*
int p=5;
func4(3);
*/
