Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
  
  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int res=1;
        int curr=1;
        for (int i=1;i<nums.size();i++) {
            if (nums[i]==nums[i-1])
                continue;
            if (nums[i]==nums[i-1]+1) {
                curr++;
            }
            else {
                res=max(curr,res);
                curr=1;
            }
        }
        res=max(res,curr);
        return res;
    }
};
ii) optimise-
  
  
  class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int>s;
        for (int i=0;i<arr.size();i++) {
            s.insert(arr[i]);
        }
        int res=0,curr=0;
        for (int i=0;i<arr.size();i++) {
            if (s.find(arr[i]-1)==s.end()) {
                curr=1;
                while (s.find(arr[i]+curr)!=s.end()) {
                    curr++;
                }
                res=max(res,curr);
            }
        }
        return res;
    }
    
};
