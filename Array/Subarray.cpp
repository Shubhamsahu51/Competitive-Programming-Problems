int Solution::maxSubArray(const vector<int> &A) {
    int res=A[0],max_sum=A[0];
    for (int i=1;i<A.size();i++) {
        max_sum+=A[i];
        max_sum=max(max_sum,A[i]);
        res=max(res,max_sum);
    }
    return res;
}
