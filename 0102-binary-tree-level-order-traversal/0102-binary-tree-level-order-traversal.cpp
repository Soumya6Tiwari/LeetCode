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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        
        vector<vector<int>>v;
        vector<int>v1;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            
            return v;
        }
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            
            TreeNode*front= q.front();
            q.pop();
            if(front!=NULL)
            {
                v1.push_back(front->val);
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
                
                v.push_back(v1);
                v1.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
                
                
            }
            
        }
        return v;
     
    
       
    }
};