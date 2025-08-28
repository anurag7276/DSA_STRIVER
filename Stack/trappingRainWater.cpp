/*
class Solution {
public:
    vector<int> prefixMax(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], arr[i]);
        }
        return prefix;
    }

    vector<int> suffixMax(vector<int>& arr) {
        int n = arr.size();
        vector<int> suffix(n);
        suffix[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], arr[i]);
        }
        return suffix;
    }

    int trap(vector<int>& height) {
        // ✅ check at very start
        if (height.empty()) return 0;

        vector<int> prefix = prefixMax(height);
        vector<int> suffix = suffixMax(height);

        int total = 0;
        for (int i = 0; i < height.size(); i++) {
            total += min(prefix[i], suffix[i]) - height[i];
        }

        return total;
    }
};


*/

/*
// optimized using 2 pointer approach

class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0 , rmax=0, total=0, l=0 , r=height.size()-1;
        while(l<r){
            if(height[l]<=height[r]){
               if(lmax > height[l]){
                total += lmax - height[l];
               }
               else{
                lmax = height[l];
               }
               l++;
            }
            else{
                  if(rmax> height[r]){
                    total += rmax-height[r];
                  }
                  else {
                    rmax = height[r];
                  }
                  r--;
            }
        }
        return total;
    }
}
    
*/
