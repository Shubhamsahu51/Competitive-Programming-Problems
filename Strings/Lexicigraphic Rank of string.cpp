int main()
{
    string str="BAC";
    string s=str;
    sort(s.begin(),s.end());
    int count=1;
    while (1) {
         if (str.compare(s)==0) {
            cout<<count; 
            break;
         }
         next_permutation(s.begin(),s.end());
         count++;
    }
    
    return 0;
}

ii)T(n)=O(n)
    
       int fact(int n) {
        if (n==0) return 1;
        return n*fact(n-1);
    }
    int rank(string S){
        int n=S.length();
        int mul=fact(n);
        int res=1;
        int count[256]={0};
        for (int i=0;i<n;i++) {
            if (count[S[i]]==0) count[S[i]]++;
            else return 0;                       //corner case if any charecter repeat in string
        }
        for (int i=1;i<256;i++) {
            count[i]+=count[i-1];
        } 
        for (int i=0;i<n-1;i++) {
            mul=mul/(n-i);
            res=res+count[S[i]-1]*mul;
            for (int j=S[i];j<256;j++)
                count[j]--;
        }
        return res;
    }
};
