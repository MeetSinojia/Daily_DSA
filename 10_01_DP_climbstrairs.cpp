// 09-09-2022
// Leetcode:-https://leetcode.com/problems/climbing-stairs/ 

// class Solution
// {
// public:
//     int count(int n)
//     {
//         if (n == 0)
//             return 0;
//         if (n == 1)
//             return 1;
//         return count(n - 1) + count(n - 2);
//     }

//     int climbStairs(int n)
//     {
//         int c = count(n + 1);
//         return c;
//     }
// };

// class Solution
// {
// public:
//     int count(int n)
//     {
//         if (n == 0)
//             return 0;
//         if (n == 1)
//             return 1;
//         return count(n - 1) + count(n - 2);
//     }

//     int climbStairs(int n)
//     {
//         int dp[n + 1];
//         dp[0] = 1;
//         for (int i = 1; i <= n; i++)
//         {
//             int x = 0;
//             if (i - 2 >= 0)
//                 x = dp[i - 2];
//             dp[i] = dp[i - 1] + x;
//         }
//         return dp[n];
//     }
// };