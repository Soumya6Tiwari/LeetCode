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
    bool check_valid_bst(TreeNode*root,long lowerbound, long upperbound)
    {
        if(root==NULL)
        {
            // maanlo ki valid bst hai
            return true;
        }
        // 1 case hum solve karenge 
        bool ans1=false;
        if(root->val>lowerbound&&root->val<upperbound)
        {
            ans1= true;
        }
        
        // baki recursion sambhal lega
        bool ans2=check_valid_bst(root->left,lowerbound,root->val);
        bool ans3=check_valid_bst(root->right,root->val,upperbound);
        
        if(ans1&&ans2&&ans3)
        {
            return true;
        }
        return false;
        
    }
    bool isValidBST(TreeNode* root) 
    {
        long lowerbound= LONG_MIN;
        long upperbound= LONG_MAX;
        bool ans=check_valid_bst(root,lowerbound,upperbound);
        return ans;
        
    }
};