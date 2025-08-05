/*
class Solution {
public:
    void findCombinations(int start, int target, vector<int>& arr, vector<vector<int>> &ans, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = start; i < arr.size(); i++) {
            // Skip duplicates
            if (i > start && arr[i] == arr[i - 1]) continue;

            if (arr[i] > target) break; // Early stopping since array is sorted

            ds.push_back(arr[i]);
            findCombinations(i + 1, target - arr[i], arr, ans, ds); // i+1: move forward
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates

        findCombinations(0, target, candidates, ans, ds);

        return ans;
    }
};

*/