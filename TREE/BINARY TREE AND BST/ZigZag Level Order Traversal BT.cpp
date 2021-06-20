vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>>vec;
    queue<TreeNode*>q;
    stack<int>st;
    bool reverse=false;
    q.push(A);
    while (!q.empty()) {
        int count =q.size();
        vector<int>v;
        for (int i=0;i<count;i++) {
            TreeNode* curr=q.front();
            q.pop();
            if (reverse)
                st.push(curr->val);
            else
                v.push_back(curr->val);
            if (curr->left!=NULL)
                q.push(curr->left);
            if (curr->right!=NULL)
                q.push(curr->right);
        }
            if (reverse) {
                while (!st.empty()) {
                    v.push_back(st.top());
                    st.pop();
                }
            }
            reverse=!reverse;
            
        
        vec.push_back(v);
    }
    return vec;
    
    
}
