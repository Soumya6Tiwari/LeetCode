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
    int height(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        
        return max(left,right)+1;
    }
    
    bool isBalanced(TreeNode* root) 
    {
        bool ans1,ans2,ans3;
        if(root==NULL)
        {
            return true;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(abs(leftHeight-rightHeight)<=1)
        {
            ans1=true;
        }
        else
        {
            ans1=false;
        }
         ans2= isBalanced(root->left);
         ans3= isBalanced(root->right);
        if(ans1&&ans2&&ans3)
        {
            return true;
        }
        return false;
    }
};