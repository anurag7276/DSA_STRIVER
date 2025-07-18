/*
// fruits into bucket

// https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0, right = 0, maxLen = 0;
        map<int, int> mpp;

        while (right < fruits.size()) {
            mpp[fruits[right]]++;  // include fruit in window

            // shrink window until we have only 2 types of fruits
            while (mpp.size() > 2) {
                mpp[fruits[left]]--;
                if (mpp[fruits[left]] == 0) {
                    mpp.erase(fruits[left]);
                }
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};
*/