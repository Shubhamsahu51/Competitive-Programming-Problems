
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
Example 1:
Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>res;
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
        for (int i=0;i<k;i++) {
            pq.push({abs(arr[i]-x),i});
            
        }   
        for (int i=k;i<n;i++) {
            int diff=abs(arr[i]-x);
            if (diff >= pq.top().first)
                continue;
            else {
                pq.pop();
                pq.push({diff,i});
            }
        }
        while (!pq.empty()) {
            res.push_back(arr[pq.top().second]);
            pq.pop();
     
        }
        sort(res.begin(),res.end());
        return res;
    }
}
