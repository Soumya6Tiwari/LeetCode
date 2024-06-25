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
    int maxLevelSum(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        
        queue<TreeNode*>q;
        vector<int>v;
        int sum=0,ans,maxi=INT_MIN;
        q.push(root);
        q.push(NULL);
        
        while(q.size()>1)
        {
            TreeNode*front= q.front();
            q.pop();
            if(front!=NULL)
            {
                sum=sum+front->val;
                if(front->left)
                {
                q.push(front->left);
                }
                if(front->right)
                {
                q.push(front->right);
                }
            }
            else
            {
                v.push_back(sum);
                sum=0; 
                q.push(NULL);
            }          
        }
        v.push_back(sum);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
                ans=i+1;
            }
        }
        
        return ans;
    }
};