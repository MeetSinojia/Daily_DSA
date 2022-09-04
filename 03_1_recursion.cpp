// 26-02-2022
// count sum subsequences for given array
// Time=O(n*2^n); Space=O(n)
#include <bits/stdc++.h>
using namespace std;

int printSubsequences(int arr[], int index, int n, int s, int sum)
{
    if (index == n)
    {

        if (s == sum)
        {
            return 1;
        }

        else
            return 0;
    }
    s = s + arr[index];
    int l = printSubsequences(arr, index + 1, n, s, sum);

    s = s - arr[index];
    int r = printSubsequences(arr, index + 1, n, s, sum);

    return l + r;
}

int main()
{
    int arr[] = {1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<printSubsequences(arr, 0, n, 0, 2);
    return 0;
}