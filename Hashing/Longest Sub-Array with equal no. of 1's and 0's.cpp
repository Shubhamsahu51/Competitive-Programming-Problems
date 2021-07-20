class Solution{
  public:
    int maxLen(int A[], int N)
    {
        //Replace '0' with '-1' in A[]
        for (int i=0;i<N;i++) {
            A[i]=(A[i]==0)?-1:1;
        }
        //Now it's same as longest sub_array with zero sum
        int pre_sum=0,res=0;
        unordered_map<int,int>m;
        for (int i=0;i<N;i++) {
            pre_sum+=A[i];
            //check for curr pre_sum
            if (pre_sum==0) {
                res=i+1;
            }
            //store in map
            if (m.find(pre_sum)==m.end()) {
                m.insert({pre_sum,i});
            }
            //check in map
            if (m.find(pre_sum)!=m.end()) {
                res=max(res,i-m[pre_sum]);
            }
        }
        return res;
    }
};
