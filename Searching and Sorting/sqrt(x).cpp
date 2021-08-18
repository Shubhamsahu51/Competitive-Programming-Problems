class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x,ans=-1;
        while (low<=high) {
            long long int mid = low+(high-low)/2;
            long long midsq = mid * mid;
            if (midsq> x)
                high=mid-1;
            else if (midsq < x) {
                low=mid+1;
                ans=mid;
            }
            else                            //if (midsq==n)
                return mid;
            
        }
        return ans;
    }
};
