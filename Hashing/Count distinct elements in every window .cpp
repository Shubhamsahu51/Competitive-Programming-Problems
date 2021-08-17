Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
  
  
  class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>ans;
        unordered_map<int,int>m;
        for (int i=0;i<k;i++) {
            m[A[i]]++;
        }
        ans.push_back(m.size());
        for (int i=1;i<n-k+1;i++) {
            m[A[i-1]]--;
            if (m[A[i-1]]==0)
               m.erase(A[i-1]);
            m[A[i+k-1]]++;
            ans.push_back(m.size());
        }
        return ans;
    }
};
