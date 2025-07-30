/*
class Solution {
public:
    static bool comparator(vector<int>& a, vector<int>& b) {
        return a[1] < b[1]; // Sort by end time (greedy approach)
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Sort intervals by end time
        sort(intervals.begin(), intervals.end(), comparator);

        int cnt = 1; // Count of non-overlapping intervals
        int lastEnd = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] >= lastEnd) {
                cnt++;
                lastEnd = intervals[i][1];
            }
        }

        return intervals.size() - cnt; // Remove overlapping ones
    }
};
*/