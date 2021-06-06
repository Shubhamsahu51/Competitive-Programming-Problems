class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vec;
        if (root==NULL)
            return vec;
        queue<TreeNode*>q;
        q.push(root);
        while (q.empty()==false) {
            int count=q.size();
            vector<int>v;
            for (int i=0; i<count; i++) {
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if (curr->left!=NULL)
                    q.push(curr->left);
                if (curr->right!=NULL)
                    q.push(curr->right);
            }
            vec.push_back(v);
        }
        return vec;
    }
};
