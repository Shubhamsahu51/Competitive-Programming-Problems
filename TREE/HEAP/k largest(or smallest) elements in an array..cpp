# k largest elements:-
Example 1:

Input:
N = 5, k = 2
arr[] = {12,5,787,1,23}
Output: 787 23
Explanation: First largest element in
the array is 787 and the second largest
is 23.
  
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        vector <int>res;
        priority_queue<int,vector<int>,greater<>>pq(arr,arr+k);
        for (int i=k;i<n;i++) {
            if (arr[i]<pq.top()) {
                continue;
            }
        
            else {
                pq.pop();
                pq.push(arr[i]);
            }
            
        }
        while (!pq.empty()) {
            res.push_back(pq.top());
            pq.pop();
        }
        reverse (res.begin(),res.end()); //for decreasing order reverse vector element
        return res;
        
        
    }
};
************************************************************************K-Smallest Element****************************
use max haeap and do same operations
