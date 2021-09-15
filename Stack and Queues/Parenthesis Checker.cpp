class Solution
{
    public:
    bool matching (char a,char b) {
        return ((a=='(' and b==')') or (a=='{' and b=='}') or (a=='[' and b==']'));
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for (int i=0;i < x.size() ; i++) {
            if ( x[i]=='(' or x[i]=='{' or x[i]=='[')
                st.push(x[i]);
            else {
                if (st.empty())
                    return false;
                else if (matching(st.top(),x[i])==false)
                    return false;
                else             
                    st.pop();
            }
            
        }
        return (st.empty()==true);
    }

};
