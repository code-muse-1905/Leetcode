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
public:
    void path(TreeNode* root, vector<string>& str, string temp){
        if(root->left==NULL && root->right==NULL){
            if(temp.size() != 0) temp += "->";
            temp += to_string(root->val);
            str.push_back(temp);
            return;
        }
        if(temp.size() != 0) temp += "->";
        temp += to_string(root->val);
        if(root->left!=NULL) path(root->left, str, temp);
        if(root->right!=NULL) path(root->right, str, temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> str;
        path(root, str,"");
        return str;
    }
};