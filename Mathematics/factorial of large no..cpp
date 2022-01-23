
https://www.geeksforgeeks.org/factorial-large-number/
int multiply(int x,vector<int>&ans,int res_size) {
        int carry = 0;
        for (int i=0;i<res_size;i++) {
            int prod = ans[i]*x + carry;
            ans[i] = prod %10;
            carry = prod/10;
        }
        while (carry) {
                ans[res_size]=carry%10;
                carry=carry/10;
                res_size++;
    
        } 
        return res_size;
    }
    void factorial(int N){
        vector<int>ans(1000,0);
        int res_size=1;
        ans[0]=1;
        for (int i=2;i<=N;i++) {
            res_size=multiply(i,ans,res_size);
        }
        for (int i=res_size-1;i>=0;i++)
            cout<<ans[i];
        
    }
