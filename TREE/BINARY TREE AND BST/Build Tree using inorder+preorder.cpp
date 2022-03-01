    int preIndex=0;
    TreeNode* buildTree(vector<int>&preorder,vector<int>&inorder,int is,int ie) {                  //is=0 and ie=inorder.size()-1 is passed as paramter
        if (is>ie)
            return NULL;
        TreeNode* root=new TreeNode(preorder[preIndex++]);
        int inIndex;
        for (int i=is;i<=ie;i++) {
            if (inorder[i]==root->val) {
                inIndex=i;
                break;
            }
        }
        root->left=buildTree(preorder,inorder,is,inIndex-1);
        root->right=buildTree(preorder,inorder,inIndex+1,ie);
        return root;
    }
