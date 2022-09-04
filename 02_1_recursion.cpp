// 24-08-2022
// sum subsequences for given array
// Time= O(n*2^n); Space=O(n)
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int arr[], int index, vector<int> &subarr, int n, int s, int sum)
{
    if (index == n)
    {

        if (s == sum)
        {
            for (auto it : subarr)
            {
                cout << it;
            }
            cout << endl;
        }
    }
    else
    {
        subarr.push_back(arr[index]);
        s = s + arr[index];
        printSubsequences(arr, index + 1, subarr, n, s, sum);

        s = s - arr[index];
        subarr.pop_back();
        printSubsequences(arr, index + 1, subarr, n, s, sum);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;
    printSubsequences(arr, 0, vec, n, 0, 3);
    return 0;
}
