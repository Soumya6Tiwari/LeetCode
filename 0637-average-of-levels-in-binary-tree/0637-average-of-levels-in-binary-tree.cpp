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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        
        vector<double>v;
        double avg, sum=0.0;
        int count=0;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode*front=q.front();
            q.pop();
            if(front!=NULL)
            {
                sum=sum+front->val;
                count++;
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
                avg=sum/count;
                count=0;
                sum=0.0;
                if(!q.empty())
                {
                q.push(NULL);
                }
                v.push_back(avg);
            }
        }
        // v.push_back(avg);
        return v;
    }
};