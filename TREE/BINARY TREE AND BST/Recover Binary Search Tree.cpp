class Solution {
public:
    TreeNode* prev=NULL,*first=NULL,*second=NULL;
    void swapped(TreeNode* root) {
        if (root==NULL)
            return;
        swapped(root->left);
        if (prev!=NULL and root->val<prev->val) {
            if (first==NULL)
                first=prev;
            second=root;
        }
        prev=root;
        swapped(root->right);
    }
    void recoverTree(TreeNode* root) {
        swapped(root);
        swap(first->val,second->val);
    }
};
