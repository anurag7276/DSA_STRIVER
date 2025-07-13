/*
// Binary Search on 2D Matrix
// LeetCode Problem: Search a 2D Matrix
// Given a 2D matrix of integers where each row is sorted in ascending order and the first integer of each row is greater than the last integer of the previous row, this code implements a binary search algorithm to find a target value in the matrix.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size(); 
        int low =0, high = (n*m)-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid/n;
            int col = mid%n;
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid+1;
            else high = mid-1;
        }
        return false;
        
    }
};
*/

/*
/// Binary Search on 2D Matrix 2
// LeetCode Problem: Search a 2D Matrix II
// Given a 2D matrix of integers where each row and each column is sorted in ascending order, this code implements a binary search algorithm to find a target value in the matrix.

class Solution {
public:
    bool binarysearch(vector<int> &mat , int target){
        int low = 0, high = mat.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(mat[mid] == target) return true;
            else if(mat[mid]<target) low = mid+1;
            else high = mid -1;
        }
        return false;
    }   

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            bool ans = binarysearch(matrix[i] , target);
            if(ans == true) return true;
        }
        return false;

        
    }
};

*/

/*
// optimized solution

class Solution {
public:  
     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row =0 , col = n-1;
        while(row<m && col>=0){
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col] < target) row++;
            else col--;
        }
   return false;
        
    }
};
// time complexity: O(m+n)
// space complexity: O(1)
*/