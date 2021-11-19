class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL or q == NULL)
            return (p == q);
        if (p->val != q->val)
            return false;
        if (isSameTree(p->left,q->left) and isSameTree(p->right,q->right))
            return true;
        else
            return false;
    }
};
