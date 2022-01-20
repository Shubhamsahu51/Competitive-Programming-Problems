class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        if (nums.size() ==0 or nums.size()==1  ) return {};
        
        for (int i =0;i<nums.size()-2;i++) {
           if (i==0 or nums[i]!=nums[i-1]) {
                int low=i+1;
                int high=nums.size()-1;
                int sum=-nums[i];
                while (low <high) {
                    if (nums[low]+nums[high]==sum) {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while (low<high and nums[low]==nums[low+1]) low++;
                        while (low<high and nums[high]==nums[high-1]) high--;
                    }
                    else if (nums[low]+nums[high] < sum) {
                        low++;
                    }
                    else {
                        high--;
                    }
                    low++;
                    high--;
                }
           }
        }
        return ans;
    }
};
