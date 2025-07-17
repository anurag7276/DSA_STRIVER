/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen=0,left=0,right=0;
        int zeroes = 0;
        while(right<nums.size()){
            if(nums[right]==0)zeroes++;
            while(zeroes>k){
                if(nums[left]==0)zeroes--;
                left++;
            }
            if(zeroes<=k){
                maxLen = max(maxLen,right-left+1);
            }
            right++;
        }
        
        return maxLen;
    }
};
// time complexity: O(2n)
// space complexity: O(1)
// k is the maximum number of zeroes we can flip to ones
*/