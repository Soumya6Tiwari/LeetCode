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
    bool levelordertraversal(TreeNode*root)
    {
        
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty())
        {
            TreeNode*front=q.front();
            q.pop();
            if(front==NULL)
            {
                flag=true;
            }
            else
            {
                if(flag==true)
               {
                return false;
                }
            q.push(front->left);
            q.push(front->right);
                
            }  
        }
        return true;
    }
    bool isCompleteTree(TreeNode* root) 
    {
        return levelordertraversal(root);
        
    }
};