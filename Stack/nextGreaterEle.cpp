/*

class Solution {
  public:
    vector < int > nextGreaterElements(vector < int > & nums) {
      int n = nums.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = 2 * n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= nums[i % n]) {
          st.pop();
        }

        if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        st.push(nums[i % n]);
      }
      return nge;
    }
};

*/


/*
// nge if circular array given

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n = nums.size();
       vector<int> nge(n, -1);
       
        for(int i=0 ; i<nums.size(); i++){
            for(int j=i+1; j<2*n ; j++){
                int ind =j%n;
                if(nums[ind] > nums[i]){
                    nge[i] = nums[ind];
                    break;
                }
            }
             
        }
        return nge;
    }
};

*/

/*
// nge1 from leetcode 496
// this is bruteforce approach

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge;
        for(auto x : nums1){
            bool  flag = false;
            int res = -1;
            for(int j=0 ;j<nums2.size() ; j++){
                if(x==nums2[j]){
                    flag = true;

                }

                if(flag && nums2[j]> x){
                    res = nums2[j];
                    break;
                }
            }
            nge.push_back(res);
        }

        return nge;
    }
};







optimal using monotonic approach


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> st;
       vector<int>ans;
       unordered_map<int,int> nge;
       for(int i=nums2.size()-1 ;i>=0 ; i--){
            while(! st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

          nge[nums2[i]] = st.empty() ? -1 : st.top();
          st.push(nums2[i]);
        }

        for(auto x : nums1){
           ans.push_back(nge[x]);
        }
  return ans;

    }
};
*/