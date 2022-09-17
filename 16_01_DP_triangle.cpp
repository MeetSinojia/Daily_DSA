// 17-09-2022
// Link:- https://leetcode.com/problems/triangle/

// Memoization
// class Solution
// {
// public:
//     int minimumPathSumUtil(int i, int j, vector<vector<int>> &triangle, int n, vector<vector<int>> &dp)
//     {
//         if (i == n - 1)
//             return triangle[i][j];

//         if (dp[i][j] != -1)
//             return dp[i][j];

//         int side = triangle[i][j] + minimumPathSumUtil(i + 1, j + 1, triangle, n, dp);
//         int down = triangle[i][j] + minimumPathSumUtil(i + 1, j, triangle, n, dp);

//         dp[i][j] = min(side, down);
//         return dp[i][j];
//     }

//     int minimumTotal(vector<vector<int>> &triangle)
//     {
//         int n = triangle.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         return minimumPathSumUtil(0, 0, triangle, n, dp);
//     }
// };


// Tabulation
// class Solution
// {
// public:
//     int minimumTotal(vector<vector<int>> &triangle)
//     {
//         int n = triangle.size();
//         vector<vector<int>> dp(n, vector<int>(n, 0));

//         for (int j = 0; j < n; j++)
//         {
//             dp[n - 1][j] = triangle[n - 1][j];
//         }

//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = i; j >= 0; j--)
//             {

//                 int down = triangle[i][j] + dp[i + 1][j];
//                 int diagonal = triangle[i][j] + dp[i + 1][j + 1];

//                 dp[i][j] = min(down, diagonal);
//             }
//         }

//         return dp[0][0];
//     }
// };


// Space Optimization
// class Solution
// {
// public:
//     int minimumPathSum(vector<vector<int>> &triangle, int n)
//     {
//         vector<int> front(n, 0);
//         vector<int> cur(n, 0);

//         for (int j = 0; j < n; j++)
//         {
//             front[j] = triangle[n - 1][j];
//         }

//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = i; j >= 0; j--)
//             {

//                 int down = triangle[i][j] + front[j];
//                 int diagonal = triangle[i][j] + front[j + 1];

//                 cur[j] = min(down, diagonal);
//             }
//             front = cur;
//         }

//         return front[0];
//     }

//     int minimumTotal(vector<vector<int>> &triangle)
//     {
//         int n = triangle.size();
//         return minimumPathSum(triangle, n);
//     }
// };