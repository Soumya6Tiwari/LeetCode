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
    int minDepth(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftHeight=minDepth(root->left);
        int rightHeight=minDepth(root->right);
        if(leftHeight==0)
        {
            return rightHeight+1;
        }
        if(rightHeight==0)
        {
            return leftHeight+1;
        }
        return min(leftHeight,rightHeight)+1;
        
    }
};