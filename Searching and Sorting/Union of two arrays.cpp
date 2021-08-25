Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.

*********************************************************************************Solution**************************************************************************************8


i)BF
T=(m+n)log(m+n)
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector<int>ans;
        int c[n+m];
        for (int i=0;i<n;i++) {
            c[i]=a[i];
        }
        for (int i=0;i<m;i++) {
            c[n+i]=b[i];
        }
        sort(c,c+m+n);
        for (int i=0;i<m+n;i++) {
            if (i==0 or c[i]!=c[i-1])
                ans.push_back(c[i]);
        }
        return (ans.size());
        
    }
};


ii)using merging technique for sorted array
