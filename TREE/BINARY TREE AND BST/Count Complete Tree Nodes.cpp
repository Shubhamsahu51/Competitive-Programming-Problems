Given the root of a complete binary tree, return the number of the nodes in the tree.
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root==NULL)
            return 0;
        else
            return (1+countNodes(root->left)+countNodes(root->right));
    }
};


OPTIMISE-
    
    class Solution {
public:
    int countNodes(TreeNode* root) {
        int rh=0,lh=0;
        TreeNode*curr=root;
        while (curr!=NULL) {
            lh++;
            curr=curr->left;
        }
        curr=root;
        while (curr!=NULL) {
            rh++;
            curr=curr->right;
        }
        if (lh==rh)
            return (pow(2,lh)-1);
        else 
            return (1+countNodes(root->left)+countNodes(root->right));
    }
};
