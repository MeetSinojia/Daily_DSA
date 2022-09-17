// 16-09-2022
// Link:- https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations/

// Memoization(TLE)
// class Solution
// {
// public:
//     int m, n;
//     int memo[1000][1000];
//     int maximumScore(vector<int> &nums, vector<int> &muls)
//     {
//         n = nums.size();
//         m = muls.size();
//         memset(memo, -1, sizeof(memo));
//         return dp(0, 0, nums, muls);
//     }
//     int dp(int l, int i, vector<int> &nums, vector<int> &muls)
//     {
//         if (i == m)
//             return 0; // Picked enough m elements
//         if (memo[l][i] != -1)
//             return memo[l][i];
//         int pickLeft = dp(l + 1, i + 1, nums, muls) + nums[l] * muls[i];            // Pick the left side
//         int pickRight = dp(l, i + 1, nums, muls) + nums[n - (i - l) - 1] * muls[i]; // Pick the right side
//         return memo[l][i] = max(pickLeft, pickRight);
//     }
// };

// Space Optimization
// class Solution
// {
// public:
//     int rec(int i, int l, int h, vector<int> &nums, vector<int> &m, vector<vector<int>> &dp)
//     {
//         if (i >= m.size())
//         {
//             return 0;
//         }
//         if (l > h)
//         {
//             return 0;
//         }
//         if (dp[i][l] != -1001)
//             return dp[i][l];

//         int take = rec(i + 1, l + 1, h, nums, m, dp) + nums[l] * m[i];
//         int notTake = rec(i + 1, l, h - 1, nums, m, dp) + nums[h] * m[i];

//         return dp[i][l] = max(take, notTake);
//     }
//     int maximumScore(vector<int> &nums, vector<int> &m)
//     {
//         int n = nums.size();
//         vector<vector<int>> dp(m.size(), vector<int>(m.size(), -1001));
//         return rec(0, 0, n - 1, nums, m, dp);
//     }
// };