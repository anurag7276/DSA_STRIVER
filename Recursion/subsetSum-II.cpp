/*
class Solution {
public:
  void findSubsets(int ind,vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,int n){
   ans.push_back(ds);// empty/null subset

   for(int i=ind ;i<n;i++){
    if(i != ind && nums[i]==nums[i-1]) continue;
    ds.push_back(nums[i]);
    findSubsets(i+1 , ans , ds,nums,n);
    ds.pop_back();
   }
  }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        findSubsets(0,ans,ds,nums,nums.size());
        return ans;
    }
};
*/