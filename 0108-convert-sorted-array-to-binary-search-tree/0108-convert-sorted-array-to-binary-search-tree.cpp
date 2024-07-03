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
        TreeNode* inorder(TreeNode*&root,int start,int end,vector<int>& nums)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid=(start+end)/2;
         root=new TreeNode(nums[mid]);
        //left recursive call
        inorder(root->left,start,mid-1,nums);
        
        // right recursive call
        inorder(root->right,mid+1,end,nums);
        return root;
        }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        int start=0;
        int end=nums.size()-1;
        TreeNode*root=NULL;
        TreeNode*ans=inorder(root,start,end,nums);
        return ans;
        
    }
};