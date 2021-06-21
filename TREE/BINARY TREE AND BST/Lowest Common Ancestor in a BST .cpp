bool findpath(Node*root,vector<Node*>&p,int n) {
    if (root==NULL)
        return false;
    p.push_back(root);
    if (root->data==n)
        return true;
    
    if (findpath(root->left,p,n) or findpath(root->right,p,n))
        return true;
    p.pop_back();
    return false;
}

//Function to find the lowest common ancestor in a BST. 
Node* LCA(Node *root, int n1, int n2)
{
  vector<Node*>path1,path2;
    if (findpath(root,path1,n1)==false or findpath(root,path2,n2)==false)
        return NULL;
    for (int i=0;i<(path1.size()-1) and i<(path2.size()-1);i++) {
        if (path1[i+1]!=path2[i+1]) {
            return path1[i];
        
        }
            
            
    }
    return NULL;
}


