//RIGHT VIEW
vector<int> Solution::solve(TreeNode* A) {
    vector<int>vec;
        if (A==NULL)
            return vec;
        queue<TreeNode*>q;
        q.push(A);
        while (q.empty()==false) {
            int count=q.size();
            for (int i=0; i<count; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (i==count-1)                                //Same as level order traversal line by line only diff is if conditional
                    vec.push_back(curr->val);
                if (curr->left!=NULL)
                    q.push(curr->left);
                if (curr->right!=NULL)
                    q.push(curr->right);
            }
            
        }
        return vec;
    
}

//LEFT VIEW

vector<int> Solution::solve(TreeNode* A) {
    vector<int>vec;
        if (A==NULL)
            return vec;
        queue<TreeNode*>q;
        q.push(A);
        while (q.empty()==false) {
            int count=q.size();
            for (int i=0; i<count; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (i==0)
                    vec.push_back(curr->val);
                if (curr->left!=NULL)
                    q.push(curr->left);
                if (curr->right!=NULL)
                    q.push(curr->right);
            }
            
        }
        return vec;
    
}
