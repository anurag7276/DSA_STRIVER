/*
class Solution {
public:
    int maximum(vector<int>&nums){
        int maxi = INT_MIN;
        for(int i=0 ;i<nums.size();i++){
            maxi = max(maxi ,nums[i]);
        }
        return maxi;
    } 

    bool sumDivisor(vector<int>&nums , int divisor , int threshold){
        int totalSum = 0;
        for(int i=0 ; i< nums.size();i++){
            totalSum += ceil((double)nums[i]/divisor);

        }
        return totalSum <= threshold;
    } 

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high =maximum(nums);
        while(low<=high){
            int mid= (low+high)/2;
            if(sumDivisor(nums,mid,threshold)) high = mid-1;
            else low = mid+1;
        }

        return low;//polarity exchange methode or keep track ans
    }
};
*/

/*
int sumByD(vector<int> &arr, int div) {
    int n = arr.size(); //size of array
    //Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size();
    if (n > limit) return -1;
    int low = 1, high = *max_element(arr.begin(), arr.end());

    //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

*/