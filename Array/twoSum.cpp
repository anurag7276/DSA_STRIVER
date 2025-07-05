/*
// brute force solution

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                   output.push_back(i);
                   output.push_back(j);
                   return output;
                }
            }
        }
        return output;
        
    }
*/

/*
vector<int> twoSum(vector<int>& nums, int target) {
     
       map<int,int>mpp;
         int n = nums.size();
       for(int i=0 ; i<n ; i++){
               int num = nums[i];
               int moreNeded = target - num;
               if(mpp.find(moreNeded) != mpp.end()){
                return { mpp[moreNeded] , i};

            }
            mpp[num] = i;
       }

       return {-1 ,-1};
        
    }
*/