/*
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
class Solution {
public:
    int cnt = 0;   // counter
    int ans = -1;  // store kth value

    void inorder(TreeNode* root, int k) {
        if (!root) return;

        inorder(root->left, k);   // go left

        cnt++;                    // visit node
        if (cnt == k) {
            ans = root->val;
            return;               // found kth smallest
        }

        inorder(root->right, k);  // go right
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};

*/