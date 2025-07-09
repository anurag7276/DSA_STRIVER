/*
class Solution {
public:
    int lowerBound(vector<int>&nums, int x){
        int low = 0, high=nums.size()-1;
        
        int ans = nums.size();
        while(low<= high){
            int mid = low + (high-low)/2;
            if(nums[mid]>=x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;

    }



    int upperBound(vector<int>&nums, int x){
        int low = 0, high=nums.size()-1;
       
        int ans = nums.size();
        while(low<= high){
             int mid = low + (high-low)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;

    }
  
     vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int lb = lowerBound(nums , target);
        if(lb==nums.size() || nums[lb] != target) {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else {
            ans.push_back(lb);
            ans.push_back(upperBound(nums,target) -1 );
        }

        return ans;
    }
};
*/