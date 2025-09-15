/*
class Solution {
public:
   int Robbery(int index , vector<int>&nums , vector<int>&dp){
    if(index == 0 ) return nums[0];
    if(index==1) return max(nums[0],nums[1]);

    if(dp[index] != -1) return dp[index];
    return dp[index] = max(nums[index]+Robbery(index-2,nums,dp) , Robbery(index-1 , nums , dp));

   }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
    int ans = Robbery(n-1,nums,dp);
    return ans;
    }
};

*/