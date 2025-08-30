/*
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum =0;
        long long largest;
        long long smallest;
        int n = nums.size();
        for(int i=0; i<n;i++){
            largest = nums[i];
            smallest = nums[i];
            for(int j=i+1;j<n;j++){
                largest = max(largest,(long long)nums[j]);
                smallest = min(smallest,(long long)nums[j]);

                sum = sum + (largest - smallest);
            }
        } 
        return sum;
    }
};

*/

/*
class Solution {
public:
    long long sumMax(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // left[i] = number of elements to the left where nums[i] is strictly greater
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            left[i] = st.empty() ? (i+1) : (i - st.top());
            st.push(i);
        }

        while(!st.empty()) st.pop();

        // right[i] = number of elements to the right where nums[i] is greater
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
            right[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }

        long long res = 0;
        for(int i=0;i<n;i++){
            res += 1LL * nums[i] * left[i] * right[i];
        }
        return res;
    }

    long long sumMin(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // left[i] = number of elements to the left where nums[i] is strictly smaller
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            left[i] = st.empty() ? (i+1) : (i - st.top());
            st.push(i);
        }

        while(!st.empty()) st.pop();

        // right[i] = number of elements to the right where nums[i] is smaller
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] > nums[i]) st.pop();
            right[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }

        long long res = 0;
        for(int i=0;i<n;i++){
            res += 1LL * nums[i] * left[i] * right[i];
        }
        return res;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumMax(nums) - sumMin(nums);
    }
};



*/
