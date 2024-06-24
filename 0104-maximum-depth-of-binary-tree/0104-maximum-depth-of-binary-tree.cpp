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
    int maxDepth(TreeNode* root)
    {
        //  always check this
        if(root==NULL)
        {
            return 0;
        }
        // USING LEVEL ORDER TRAVERSAL
         queue<TreeNode*>q;
         int count=0;
        q.push(root);
        q.push(NULL);
        count++;
        while(q.size()>1)
        {
            TreeNode* front=q.front();
            //case 1: if front is valid node
            if(front!=NULL)
            {
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                
                q.pop();
            }
            else
            {
                  if(q.size()==1)
                  {
                      break;
                  }
                    q.push(NULL);
                    count++;
                    q.pop();
                
            }
            
        }
        return count;
    }
};