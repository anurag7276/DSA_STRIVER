/*
 int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0 , maxCnt = 0;
        for(int i=0 ; i <nums.size(); i++){
            if(nums[i]==1){
                cnt++;
                if(maxCnt < cnt) maxCnt = cnt;
            }
            if(nums[i]==0) cnt =0;
        }
        return maxCnt;
    }
*/