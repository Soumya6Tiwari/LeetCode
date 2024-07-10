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
    void inorder(TreeNode*&root,vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    
        
        
    
    TreeNode* increasingBST(TreeNode* root) 
    {
        vector<int>v;
        inorder(root,v);
         TreeNode*root1=new TreeNode(v[0]);
         int i=1;
         TreeNode*temp=root1;
        while(i!=v.size())
        {
            TreeNode*newnode=new TreeNode(v[i]);
            temp->right=newnode;
            temp=newnode;
            i++;
        }
        return root1;
    }
};