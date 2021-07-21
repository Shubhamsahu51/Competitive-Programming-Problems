Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
    
    
class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        unordered_set<int>s;
        vector<int>ans;
        for (int i=0;i<v2.size();i++) {
            s.insert(v2[i]);
        }
        for (int i=0;i<v1.size();i++) {
            if (s.find(v1[i])!=s.end()) {
                ans.push_back(v1[i]);
                s.erase(s.find(v1[i]));
            }
        }
        
        return ans;
    }
};
