class Solution {
public:
    bool isMirror(TreeNode *LST,TreeNode *RST) {
        if (LST == nullptr or RST == NULL)
            return LST==RST;
        if (LST->val != RST->val)
            return false;
        if (isMirror(LST->left,RST->right) and isMirror(LST->right,RST->left))
            return true;
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isMirror(root->left,root->right);
    }
};
