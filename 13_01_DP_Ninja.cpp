// 14-09-2022
// Link:- https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h>
// using namespace std;
// int recursiveTraining(vector<vector<int>> &input, int n, vector<vector<int>> &memo, int k)
// {
//     if (n == 0)
//     {
//         int maxe = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             if (k != i)
//             {
//                 maxe = max(maxe, input[n][i]);
//             }
//         }
//         return maxe;
//     }
//     if (memo[n][k] != -1)
//     {
//         return memo[n][k];
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         // we can not take previosly taken activity
//         if (k != i)
//         {
//             memo[n][k] = max(memo[n][k], input[n][i] + recursiveTraining(input, n - 1, memo, i));
//         }
//     }
//     return memo[n][k];
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> memo(n, vector<int>(4, -1));
//     int ans1 = recursiveTraining(points, n - 1, memo, 3);
//     return ans1;
// }