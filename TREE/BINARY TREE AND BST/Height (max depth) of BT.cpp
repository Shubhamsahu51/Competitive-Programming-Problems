class Solution {
public:
    int maxDepth(TreeNode* root) {
        int max_val;
        if (root==NULL)
            return 0;
        else 
            
            return (1+max(maxDepth(root->left),maxDepth(root->right)));
    }
};
