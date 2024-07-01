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
    int kthSmallest(TreeNode* root, int &k) 
    {
        if(root==NULL)
        {
            return -1;
        }
        
        // firstly inorder traversal karke k ki track rakho and jaha pe bhi 0 aaye ie answer
        // inorder is left root right
        
        // left 
        int leftkaAns=kthSmallest(root->left,k);
        if(leftkaAns!=-1)
        {
            return leftkaAns;
        }
        
        // root
        k--;
        if(k==0)
        {
            return root->val;
        }
        
        // right
         int rightKaAns=kthSmallest(root->right,k);
         return rightKaAns;
        
    }
};