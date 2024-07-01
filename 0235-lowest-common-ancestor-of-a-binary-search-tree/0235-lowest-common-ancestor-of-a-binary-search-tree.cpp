/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        // base case
        if(root==NULL)
        {
            return NULL;
        }
        
        // 3 cases bnte hai
        // case 1 : jab p aur q dono alag alag subtrees me ho ie p in lst and q in rst or vice versa
        if(p->val<root->val&&q->val>root->val)
        {
            return root;
        }
        //  case 2: jab p aur q dono hi lst me exist kare
        if(p->val<root->val&&q->val<root->val)
        {
            TreeNode* leftkaAns=lowestCommonAncestor(root->left,p,q);
            return leftkaAns;
        }
        //  acse 3: jab p aur q dono hi rst me exist kare
        if(p->val>root->val&&q->val>root->val)
        {
            TreeNode* rightkaAns=lowestCommonAncestor(root->right,p,q);
            return rightkaAns;
            
        }
        return root;
        
    }
};