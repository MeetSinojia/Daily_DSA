// 22-02-2022
// Fibonacci
// Time=O(2^n);

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 9;
    int fibo = fib(n);
    cout << fibo;
    return 0;
}