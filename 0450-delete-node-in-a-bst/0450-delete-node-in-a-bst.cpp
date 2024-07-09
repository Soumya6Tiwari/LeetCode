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
    int maximum(TreeNode*root)
    {
        TreeNode*temp=root;
        while(temp->right!= NULL)
        {
            temp=temp->right;
        }
        return temp->val;
    }
    TreeNode*del_node(TreeNode*&root,int key)
    {
        // key ko dhundo
        // key ko delete karo
        
        // base case
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val==key)
        {
            // 4 cases bnte hai;
            // case 1 : leaf node
            if(root->left==NULL&&root->right==NULL)
            {
                delete root;
                return NULL;
            }
            
            // case 2: root->left empty na ho but right ho
            if(root->left!=NULL&&root->right==NULL)
            {
                TreeNode*childlefttree=root->left;
                delete root;
                return childlefttree;
            }
            // case 3: root->left abki baar empty ho aur right empty na ho
            if(root->left==NULL&&root->right!=NULL)
            {
                TreeNode*childrighttree=root->right;
                delete root;
                return childrighttree;
            }
            // case 4: jab root->left aur root->right dono hi empty na ho
            if(root->left!=NULL&&root->right!=NULL)
            {
                int maxi=maximum(root->left);
                root->val=maxi;
                root->left=del_node(root->left,maxi);
                
            }
        }
        else if(key<root->val)
        {
            root->left=del_node(root->left,key);
        }
        else
        {
            root->right=del_node(root->right,key);
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        TreeNode*ans=del_node(root,key);
        return ans;
        
    }
};