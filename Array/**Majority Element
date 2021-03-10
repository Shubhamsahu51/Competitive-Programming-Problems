Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104

***********************************************************Solution************************************************************************************
I} BF-O(N^2)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int res=0;
        for (int i=0;i<n;i++) {
            int count =1;
            for (int j=i+1;j<n;j++) {
                if (nums[i]==nums[j])
                count++;
            }
            if(count>(n/2)) {
                res=nums[i];
                break;
        
            }
        }
   return res;
    }
};

II) OPtimise-O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0,count=1;
        int n=nums.size();
        for (int i=1;i<n;i++) {
            if (nums[i]==nums[res])
                count++;
            else
                count--;
            if (count==0) {
                res=i;                        //res comtain index of majority ele
                count=1;
            }
        }
        count=0;                             //to verify selected candidate is majority ele
        for (int i=0;i<n;i++) {
           if (nums[res]==nums[i])
               count++;
            if (count<=(n/2))
                return -1;                       // majority absent
        }
    return nums[res];
    }
};

