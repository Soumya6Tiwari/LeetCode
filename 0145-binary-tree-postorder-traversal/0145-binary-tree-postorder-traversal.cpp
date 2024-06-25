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
    void postorder(TreeNode*root, vector<int>&v)
    {
        // base case
        if(root==NULL)
        {
            return ;
        }
        
        // postorder is left right root
        
        // left recursion sambhal lega
        postorder(root->left,v);
        
        // right recursion sambhal lega
        postorder(root->right,v);
        
        // process root
        v.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int>v;
        postorder(root,v);
        return v;
        
    }
};