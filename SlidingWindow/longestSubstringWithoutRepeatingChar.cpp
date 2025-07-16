/*
// brute force solution

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0, right=0,maxLen=0;
        int n= s.size();
      
        for(int i=0; i<n;i++){
              vector<int>hash(256,0);
            for(int j=i;j<n;j++){
                if(hash[s[j]] == 1) break;
                maxLen = max(maxLen , j-i+1);
                hash[s[j]] = 1;

            }
        }
        return maxLen;
    }
};
// time complexity: O(n^2)
// space complexity: O(1) or 0(256) since we are using a fixed size array of 256
*/

/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0, right=0,maxLen=0;
        int n= s.size();
      
       vector<int>hash(256, -1);
       while(right<n){
        if(hash[s[right]] != -1){
            if(hash[s[right]] >= left){
                left = hash[s[right]]+1;
            }
        }
        maxLen = max(maxLen, right-left+1);
        hash[s[right]] = right;
        right++;
       }
       return maxLen;
    }
};

// time complexity: O(n)
// space complexity: O(1) or O(256) since we are using a fixed
*/
