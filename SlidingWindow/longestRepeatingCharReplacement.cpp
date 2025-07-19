/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, maxf = 0, maxlen = 0;
        int hash[26] = {0};

        for (int right = 0; right < s.size(); right++) {
            hash[s[right] - 'A']++;
            maxf = max(maxf, hash[s[right] - 'A']);

            // If window size - max frequency > k, shrink the window
            while ((right - left + 1) - maxf > k) {
                hash[s[left] - 'A']--;
                left++;
            }

            // Update maxlen to current valid window size
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};// time complexity: O(n)
// space complexity: O(1)
*/