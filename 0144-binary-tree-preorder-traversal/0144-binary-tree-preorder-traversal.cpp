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
    void preorder(TreeNode*root,vector<int>&v)
    {
        // base case
        if(root==NULL)
        {
            return;
        }
        
        // preorder is root left right
        
        // process root
        v.push_back(root->val);
        
        //left traversal recursion sambhal lega
        preorder(root->left,v);
        
         //right traversal recursion sambhal lega
        preorder(root->right,v);
        
        
    }
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int>v;
        preorder(root,v);
        return v;
        
    }
};