Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        vector<int>arr(n);                   //declare size of vector
        for (int i=0;i<n;i++) {             //create copy of original vector
            arr[i]=nums[i];
        }
        sort(nums.begin(),nums.end());
        int low=0,high=n-1;
        while (low < high) {
            if (nums[low]+nums[high]==target) {
              break;
            }
            else if ((nums[high]+nums[low]) > target) {
                high--;
            }
            else 
                low++;
        }
        for (int i=0;i<n;i++) {               //match with copied vector so as to return correct index of given vector
            if (nums[low]==arr[i])
                ans.push_back(i);
            else if (nums[high]==arr[i])
                ans.push_back(i);
        }
        return ans;
    }
};
