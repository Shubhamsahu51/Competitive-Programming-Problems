class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string res="";
        for (auto x:s) {
            if (st.size()==0) 
                st.push({x,1});
            else if (st.top().first==x) 
                st.push({x,st.top().second+1});
            else 
                st.push({x,1});
            
            if (st.top().second==k) {
                int temp=k;
                while (temp--)
                    st.pop();
            }
        }
        while (st.size()) {
          res+=st.top().first;
          st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
