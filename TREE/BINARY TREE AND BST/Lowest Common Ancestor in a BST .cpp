bool findpath(TreeNode*root,vector<TreeNode*>&p,int n) {
    if (root==NULL)
        return false;
    p.push_back(root);
    if (root->val==n)
        return true;
    
    if (findpath(root->left,p,n) or findpath(root->right,p,n))
        return true;
    p.pop_back();
    return false;
}
int Solution::lca(TreeNode* A, int B, int C) {
    vector<TreeNode*>path1,path2;
    if (findpath(A,path1,B)==false or findpath(A,path2,C)==false)
        return -1;
     int i;
    for (i = 0; i < (path1.size()-1) && i < (path2.size()-1) ; i++)
        if (path1[i+1] != path2[i+1])
            break;
    TreeNode*temp=path1[i];
    return temp->val;       
            
}
