    vector<int> verticalOrder(Node *root)
    {
        map<int,vector<int>>mp;
        vector<int>ans;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while (q.empty() == false) {
            auto p =q.front();
            Node *curr=p.first;
            int hd =p.second;
            mp[hd].push_back(curr->data);
            q.pop();
            if (curr->left != NULL)
                q.push({root->left,hd-1});
            if (curr->right != NULL)
                q.push({root->right,hd+1});
        }
        for (auto x :mp) {
            vector<int>v=x.second;
            for (auto p:v)
            ans.push_back(p);
        }
        return ans;
    }
};
