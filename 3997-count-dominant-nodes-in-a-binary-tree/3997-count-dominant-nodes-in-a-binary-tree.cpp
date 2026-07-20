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
 */
class Solution {
    int ans = 0; 
    
    private:
     int c(TreeNode* root) {
        if(root == nullptr) return 0 ; 
        int l = c(root->left); 
        int r = c(root->right); 
        if(root->val >= max(l, r)) {
            ans++; 
        }
        return max(root->val, max(l, r)); 
    }
    public:
     int countDominantNodes(TreeNode* root) {
        ans = 0; 
        c(root); 
        return ans; 
    }
};