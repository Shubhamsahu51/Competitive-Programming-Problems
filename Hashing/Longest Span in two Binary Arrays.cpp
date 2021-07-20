class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
        //find new array temp which is diff of both array
            int temp[n];
            for (int i=0;i<n;i++) {
                temp[i]=arr1[i]-arr2[i];
            }
        //Now find longest subarray with zero sum using temp[]
        int pre_sum=0,res=0;
        unordered_map<int,int>m;
        for (int i=0;i<n;i++) {
            pre_sum+=temp[i];
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
