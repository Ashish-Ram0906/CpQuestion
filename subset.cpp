#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<int> &nums,vector<int>&curr, int i, vector<vector<int>> &ans)
    {
         if(i==nums.size())
         {
            ans.push_back(curr);
            return;
         }
         curr.push_back(nums[i]);
         helper(nums,curr,i+1,ans);
         curr.pop_back();
          helper(nums,curr,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int> sub;
      helper(nums,sub,0,ans);
      return ans;
        
    }
};