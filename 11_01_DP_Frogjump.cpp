// 12-09-2022
// Leetcode:-https://www.codingninjas.com/codestudio/problems/frog-jump_3621012

// #include <bits/stdc++.h>

// int solve(int ind, vector<int> &height, vector<int> &dp)
// {
//     if (ind == 0)
//         return 0;
//     if (dp[ind] != -1)
//         return dp[ind];
//     int jumpTwo = INT_MAX;
//     int jumpOne = solve(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
//     if (ind > 1)
//         jumpTwo = solve(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);

//     return dp[ind] = min(jumpOne, jumpTwo);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n, -1);
//     return solve(n - 1, heights, dp);
// }

// #include <bits/stdc++.h>

// int solve(int ind, vector<int> &height, vector<int> &dp)
// {
//     if (ind == 0)
//         return 0;
//     if (dp[ind] != -1)
//         return dp[ind];
//     int jumpTwo = INT_MAX;
//     int jumpOne = solve(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
//     if (ind > 1)
//         jumpTwo = solve(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);

//     return dp[ind] = min(jumpOne, jumpTwo);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n, -1);
//     return solve(n - 1, heights, dp);
// }

// #include <bits/stdc++.h>

// int frogJump(int n, vector<int> &height)
// {

//     int prev = 0;
//     int prev2 = 0;
//     for (int i = 1; i < n; i++)
//     {

//         int jumpTwo = INT_MAX;
//         int jumpOne = prev + abs(height[i] - height[i - 1]);
//         if (i > 1)
//             jumpTwo = prev2 + abs(height[i] - height[i - 2]);

//         int cur_i = min(jumpOne, jumpTwo);
//         prev2 = prev;
//         prev = cur_i;
//     }
//     return prev;
// }