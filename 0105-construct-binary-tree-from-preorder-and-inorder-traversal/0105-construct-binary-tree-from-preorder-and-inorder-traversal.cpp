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
    unordered_map<int,int>mp;
    int ind=0;
    TreeNode* build(vector<int>& p,vector<int>& in,int s,int e){
        if(s>e) return nullptr;
        int rootVal = p[ind++];
        TreeNode* root = new TreeNode(rootVal);
        int pos = mp[rootVal];
        root->left=build(p,in,s,pos-1);
        root->right=build(p,in,pos+1,e);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return build(preorder,inorder,0,inorder.size()-1);
    }
};