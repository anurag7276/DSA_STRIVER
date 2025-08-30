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

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        int maxArea = 0;

        // heights array to simulate histogram
        vector<int> heights(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') {
                    heights[j] += 1;   // increase height
                } else {
                    heights[j] = 0;    // reset height
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }
};


*/




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

    // Largest rectangle in histogram
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse = findNSE(heights);
        vector<int> pse = findPSE(heights);
        int maxi = 0;

        for (int i = 0; i < heights.size(); i++) {
            maxi = max(maxi, heights[i] * (nse[i] - pse[i] - 1));
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxArea = 0;

        // prefix sum heights matrix
        vector<vector<int>> psum(n, vector<int>(m, 0));

        // build prefix sum heights
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] == '1') {
                    if (i == 0) psum[i][j] = 1;
                    else psum[i][j] = psum[i - 1][j] + 1;
                } else {
                    psum[i][j] = 0;
                }
            }
        }

        // apply histogram max rectangle row by row
        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, largestRectangleArea(psum[i]));
        }

        return maxArea;
    }
};



*/