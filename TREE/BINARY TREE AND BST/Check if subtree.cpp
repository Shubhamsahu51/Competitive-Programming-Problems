bool isIdentical(Node *r1, Node *r2){
        if (r1==NULL || r2==NULL )
            return (r1==r2);
            
        if (r1->data != r2->data)
            return false;
            
        else if (isIdentical(r1->left,r2->left) and isIdentical(r1->right,r2->right))
            return true;
        
        
        return false;
    }
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        if (T==NULL)
            return false;
            
        if (S==NULL) 
            return true;
            
        if (isIdentical(T,S))
            return true;
        return (isSubTree(T->left,S) or isSubTree(T->right,S)); 
            
        
    }
