// 22-02-2022
// subsequences for given array using
// Time=O(n*2^n); Space=O(n)
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int arr[], int index, vector<int> &subarr, int n)
{
    if (index == n)
    {
        for (auto it : subarr)
        {
            cout << it << " ";
        }
        if (subarr.size() == 0)
            cout << "{}";

        cout << endl;
        return;
    }
    else
    {
        subarr.push_back(arr[index]);

        printSubsequences(arr, index + 1, subarr, n);

        subarr.pop_back();

        printSubsequences(arr, index + 1, subarr, n);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;

    printSubsequences(arr, 0, vec, n);

    return 0;
}