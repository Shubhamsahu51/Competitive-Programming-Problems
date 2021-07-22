class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        unordered_map<int,int>m;
        vector<int>ans;
        for (int i=0;i<v2.size();i++) {
            m[v2[i]]++;
        }
        for (int i=0;i<v1.size();i++) {
            if (m.find(v1[i])!=m.end() and m[v1[i]] >0) {
                ans.push_back(v1[i]);
                m[v1[i]]--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
