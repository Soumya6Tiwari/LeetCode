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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        int maxi=INT_MIN;
        int i,j,k,pos,leftindex,rightindexstart,rightindexend;
        rightindexstart=0;
        rightindexend=nums.size()-1;
        vector<int>left,right;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>=maxi)
            {
                maxi=nums[i];
                pos=i;
            }
        }
        for(i=0;i<pos;i++)
        {
            left.push_back(nums[i]);
        }
        for(i=pos+1;i<nums.size();i++)
        {
            right.push_back(nums[i]);
        }
        TreeNode*root=new TreeNode(maxi);
        if(left.size()!=0)
        {
        root->left=constructMaximumBinaryTree(left);
        }
        if(right.size()!=0)
        {
        root->right=constructMaximumBinaryTree(right);
        }
        return root;
        
    }
};