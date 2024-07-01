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
    void inorder(TreeNode*root, vector<int>&v)
    {

        if(root==NULL)
        {
            return ;
        }
        
        // do the inorder traversal and store the result
        
        // left
            inorder(root->left,v);
        
        
        // root
        v.push_back(root->val);
        
        
        // right
        inorder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) 
    {
       vector<int>v;
        inorder(root,v);
        
        int start=0,end=v.size()-1;
       
            while(start<end)
            {
                if(v[start]+v[end]==k)
                {
                    return true;
                }
                else if(v[start]+v[end]<k)
                {
                    start++;
                }
                else if(v[start]+v[end]>k)
                {
                    end--;
                }
            }
        
        return false;
        
    }
};