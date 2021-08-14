class Solution{
public:

    void helper(string ip,string op,vector<string>&ans) {
        if (ip.length()==0) {
            ans.push_back(op);
            return;
        }
        
        helper(ip.substr(1),op+" "+ip[0],ans);
        helper(ip.substr(1),op+ip[0],ans);
    }
    vector<string> permutation(string S){
        
        vector<string>ans;
        string ip=S;
        string op="";
        helper(ip.substr(1),op+ip[0],ans);
        return ans;
    }
};
