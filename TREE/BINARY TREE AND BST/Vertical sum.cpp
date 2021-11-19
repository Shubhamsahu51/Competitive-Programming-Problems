class Solution{
  public:
    void helper(Node *root,int hd,map<int,int>mp) {
        if (root==NULL)
            return;
        helper(root->left,hd-1,mp);
        mp[hd]+=root->data;
        helper(root->right,hd+1,mp);
    }
    vector <int> verticalSum(Node *root) {
        map<int,int>mp;
        helper(root,0,mp);
        vector<int>ans;
        for (auto x:mp) {
          ans.push_back(x.second);  
        }
        return ans;
    }
};
