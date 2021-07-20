class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N)   //
    { 
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
