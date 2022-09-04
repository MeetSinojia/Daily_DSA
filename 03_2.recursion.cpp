// 26-02-2022
// Leetcode:- https://leetcode.com/problems/combination-sum/
// Time:- O(2^n*k)

// class Solution {
// public:
    
// void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
//       if (ind == arr.size()) {
//         if (target == 0) {
//           ans.push_back(ds);
//         }
//         return;
//       }
    
//       //same element picking
//       if (arr[ind] <= target) {
//         ds.push_back(arr[ind]);
//         findCombination(ind, target - arr[ind], arr, ans, ds);
//         ds.pop_back();
//       }
      
//       //move to next element
//       findCombination(ind + 1, target, arr, ans, ds);

//     }
    
    
//   public:
//     vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
//         vector < vector < int >> ans;
//       vector < int > ds;
//       findCombination(0, target, candidates, ans, ds);
//       return ans;
//     }
// };