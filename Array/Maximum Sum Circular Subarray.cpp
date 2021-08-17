Given a circular array C of integers represented by A, find the maximum possible sum of a non-empty subarray of C.
Example 1:

Input: [1,-2,3,-2]
Output: 3
Explanation: Subarray [3] has maximum sum 3
Example 2:

Input: [5,-3,5]
Output: 10
Explanation: Subarray [5,5] has maximum sum 5 + 5 = 10
Example 3:

Input: [3,-1,2,-1]
Output: 4
Explanation: Subarray [2,-1,3] has maximum sum 2 + (-1) + 3 = 4
Example 4:

Input: [3,-2,2,-3]
Output: 3
Explanation: Subarray [3] and [3,-2,2] both have maximum sum 3
Example 5:

Input: [-2,-3,-1]
Output: -1
Explanation: Subarray [-1] has maximum sum -1
 

Note:

-30000 <= A[i] <= 30000
1 <= A.length <= 30000
************************************************************************Solution*********************************************************************
i)BF-
 int maxcircular(int arr[],int n) {
    int res=arr[0];
    for (int i=0;i<n;i++) {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for (int j=1;j<n;j++) {
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max=max(curr_max,curr_sum);
            
        }
        res=max(res,curr_max);
    }
    return res;
}



ii)optimise-
class Solution {
public:
    int normalmaxsum(vector<int>& A,int n) {                             //cal to noraml subarray sum
        int res=A[0];
        int maxending=A[0];
        for (int i=1;i<n;i++) {
            maxending=max(maxending+A[i],A[i]);
            res=max(maxending,res);
        }
        return res;
    }
        
    int maxSubarraySumCircular(vector<int>& A) {                            //main fun
        int n=A.size();
        int maxnormal=normalmaxsum(A,n);
        if (maxnormal<0)
            return maxnormal;
        int totalsum=0;
        for (int i=0;i<n;i++) {
            totalsum+=A[i];
            A[i]=-A[i];
        }
        int maxcircular=totalsum+normalmaxsum(A,n);                  //pass inversion vector 
    
        return max(maxnormal,maxcircular);
    }
};
