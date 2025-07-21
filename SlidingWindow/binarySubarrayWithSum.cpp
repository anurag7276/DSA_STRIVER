/*
class Solution {
public:

    int numOfSubarray(vector<int>&nums , int goal){
        if(goal<0) return 0;
        int l=0 , r=0 , cnt=0, sum=0;
        while(r<nums.size()){
            sum += nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numOfSubarray(nums , goal) - numOfSub array(nums , goal-1); 
        
           }
};// time complexity: O(n)  => 2 * O(2n) for two passes through the array
// space complexity: O(1)
*/