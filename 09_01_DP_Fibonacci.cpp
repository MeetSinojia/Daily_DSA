// 08-09-2022
// Leetcode:- https://leetcode.com/problems/fibonacci-number/

// //Memorization
// class Solution
// {
// public:
//     int f(int n, vector<int> &dp)
//     {
//         if (n <= 1)
//             return n;

//         if (dp[n] != -1)
//             return dp[n];
//         return dp[n] = f(n - 1, dp) + f(n - 2, dp);
//     }

//     int fib(int n)
//     {
//         vector<int> dp(n + 1, -1);
//         return f(n, dp);
//     }
// };

// Tabulation Space Tabulation

// class Solution
// {
// public:
//     int fib(int n)
//     {

//         vector<int> dp(n + 1, -1);

//         dp[0] = 0;
//         dp[1] = 1;

//         for (int i = 2; i <= n; i++)
//         {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }
//         return dp[n];
//     }
// };