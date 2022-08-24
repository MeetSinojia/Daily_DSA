// 22-02-2022
//  Factorial
// Time=O(n) and Space=O(n);

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n = 5;
    int factorial = fact(n);
    cout << factorial;
    return 0;
}