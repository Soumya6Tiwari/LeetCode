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
    void inordertraversal(TreeNode*root,vector<int>&v)
    {
        // base case
        if(root==NULL)
        {
            return ;
        }
        
        // inorder is left root right
        // left traversal
        // if(root->left)
        // {
        inordertraversal(root->left,v);
        // }
        
        // process root
        v.push_back(root->val);
        
        // right traversal
        // if(root->right)
        // {
        inordertraversal(root->right,v);
        // }
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>v;
        inordertraversal(root,v);
        
        return v;
        
    }
};