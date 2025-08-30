/*
class Solution {
public:
    // Next Smaller Element (Right)
    vector<int> findNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n, n); // default to n (no smaller on right)
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }

    // Previous Smaller Element (Left)
    vector<int> findPSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n, -1); // default to -1 (no smaller on left)
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse = findNSE(heights);
        vector<int> pse = findPSE(heights);
        int maxi = 0;

        for (int i = 0; i < heights.size(); i++) {
            maxi = max(maxi, heights[i] * (nse[i] - pse[i] - 1));
        }
        return maxi;
    }
};


*/


/*
// this is solution but comes TLE 

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     int n = heights.size();
     int maxArea = 0;
      for(int i=0; i<n;i++){
        int minHeight = INT_MAX;
        for(int j=i; j<n; j++){
            minHeight= min(minHeight,heights[j]);
            maxArea = max(maxArea , minHeight*(j-i+1));
        }
      }

      return maxArea;
    }
};  

*/