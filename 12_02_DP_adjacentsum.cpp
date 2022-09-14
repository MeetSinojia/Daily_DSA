// 13-09-2022
// Link:- https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include <bits/stdc++.h>
using namespace std;

int recursiveSum(vector<int> &input, vector<int> &memo, int n)
{
    if (n == 0)
    {
        // n==0 , only reach if we have not taken n=1 element , if we have taken then this will be - 1;
        return input[0];
    }
    if (n < 0)
    {
        return 0;
    }

    if (memo[n] != -1)
    {
        return memo[n];
    }

    int taken = 0;
    int notTaken = 0;
    taken = input[n] + recursiveSum(input, memo, n - 2);
    notTaken = 0 + recursiveSum(input, memo, n - 1);
    return memo[n] = max(taken, notTaken);
}

//Tabulation
int countDp(vector<int> &input)
{
    int dp[input.size()];
    dp[0] = input[0];
    for (int i = 1; i < input.size(); i++)
    {
        dp[i] = max(dp[i - 1], (i - 2 < 0 ? 0 : dp[i - 2]) + input[i]);
    }
    return dp[input.size() - 1];
}

//Space Optimization
int solve(int n, vector<int>& arr){
    int prev = arr[0];
    int prev2 =0;
    
    for(int i=1; i<n; i++){
        int pick = arr[i];
        if(i>1)
            pick += prev2;
        int nonPick = 0 + prev;
        
        int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
        
    }
    return prev;
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    int sum = 0;
    int n = nums.size();
    vector<int> memo(n + 1, -1);
    // return recursiveSum(nums, memo, n - 1);
    // return countDp(nums);
    return solve(n,nums);
}


/*
In recusive + memoization
time complexity : O(n)
space complexity : O(n) for array + O(n) because of recursion stack
In dp
time complexity : O(n)
space complexity : O(n)
*/

