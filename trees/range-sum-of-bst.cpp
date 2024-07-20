class Solution {
public:
    int sum(TreeNode* root, int low, int high,int &res)
    { 
        if(root==NULL)
        return 0;
        
        if(root->val<=high && root->val>=low)
        res+=root->val;
        
        sum(root->left,low,high,res);
        sum(root->right,low,high,res);

        return res;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
          int res=0;
          return sum(root,low,high,res);
    }
};