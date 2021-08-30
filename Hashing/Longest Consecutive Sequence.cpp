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
