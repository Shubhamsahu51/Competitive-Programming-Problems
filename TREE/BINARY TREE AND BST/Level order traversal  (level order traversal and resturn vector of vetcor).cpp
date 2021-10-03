i) BF-O(N)
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //Node at distance k
    void helper(TreeNode*root,int k,vector<int>&temp) {
    if (!root)           //if k is more then height
       return;
    if (k==0)
      temp.push_back(root->val);
    else {
        helper(root->left,k-1,temp);
        helper(root->right,k-1,temp);
    }
}
    
    //calculate height
    int height(TreeNode*root) {
        if (!root)
            return 0;
        else {
            return 1+max(height(root->left),height(root->right));
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int ht=height(root);
        for (int i=0;i<ht;i++) {
            vector<int>temp;
            helper(root,i,temp);
            ans.push_back(temp);
        }
        return ans;
    }
};

ii)optimise-O(N)
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
