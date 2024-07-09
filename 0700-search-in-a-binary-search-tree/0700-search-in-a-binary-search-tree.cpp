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
    TreeNode*search_in_a_bst(TreeNode*&root,int val)
    {
       if(root==NULL)
       {
           return root;
       }
        if(root->val==val)
        {
            return root;
        }
        if(val<root->val)
        {
            return search_in_a_bst(root->left,val);
        }
        return search_in_a_bst(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val)
    {
        TreeNode*ans=search_in_a_bst(root,val);
        
        return ans;
    }
};