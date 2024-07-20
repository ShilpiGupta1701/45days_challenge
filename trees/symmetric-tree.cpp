class Solution {
public:
    bool fun(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)
        return true;

        if(root1==NULL)
        return false;

        if(root2==NULL)
        return false;

        return (root1->val == root2->val) && fun(root1->left,root2->right) && fun(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
        return true;
        
        return fun(root->left,root->right);
        
    }
};