class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ans(n,0);          //will hold span value
       stack<int>st;                 //will contain index value of price[]
       ans[0]=1;                    
       st.push(0);
       for (int i = 1 ; i < n ; i++) {
           while ( !st.empty() and price[i]>=price[st.top()])
                st.pop();
           ans[i] = (st.empty()) ? (i+1) : (i-st.top());
           st.push(i);
       }
       return ans;
    }
};
