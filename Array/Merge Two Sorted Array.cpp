Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


Example 1:

Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any 
extra space, modify the given arrays
to form 
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}

Example 2:

Input:
N = 2, M = 3
arr1[] = {10, 12}
arr2[] = {5, 18, 20}
Output: 5 10 12 18 20
Explanation: Since you can't use any
extra space, modify the given arrays
to form 
arr1[] = {5, 10}
arr2[] = {12, 18, 20}
 

Your Task:
You don't need to read input or print anything. Complete the function merge() which takes the two arrays arr1[], arr2[] and their sizes n and m, as input parameters. The function does not return anything. Use the given arrays to sort and merge arr1[] and arr2[] in-place. 
Note: The generated output will print all the elements of arr1[] followed by all the elements of arr[2].


Expected Time Complexity: O((n+m)*log(n+m))
Expected Auxiliary Space: O(1)


Constraints:
1 <= N, M <= 5*104
0 <= arr1i, arr2i <= 106


***************************************************************SOLUTION*****************************************************


class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=n-1;
	    int j= 0;
	    for ( ; i>=0 and j<m ; i--,j++) {
	        if (arr1[i] > arr2[j])
	            swap (arr1[i],arr2[j]);
	        else 
	            break;
	    }
	    sort (arr1,arr1+n);
	    sort (arr2,arr2+m);
	}
};

ii) with extra space-t(n)=o(m+n)
	class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>ans(m+n,0);
        int i=0,j=0,k=0;
        while (i<m and j<n) {
            if (nums1[i]<nums2[j] )
                ans[k++]=nums1[i++];
            else
                ans[k++]=nums2[j++];
        }
            for (;i<m;i++)
                ans[k++]=nums1[i];
            for (;j<n;j++)
                ans[k++]=nums2[j];
        
         nums1.swap(ans);
        
    }
};
iii) save space-
	
	The way to think about the solution is that we will have to do a reverse sorting.
We initialize k=m+n-1 as that will be the last location of nums1.
We will keep checking for the greater element of the two arrays(i=m-1,j=n-1) and insert the values.
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

nums1 = [1,2,3,0,0,0]
             |     |
             i     k

nums2 = [2,5,6]
             |
             j
nums2[j]>nums1[i] thus nums1[k]=6
k and j are decremented.

nums1 = [1,2,3,0,0,6]
             |     |
             i     k

nums2 = [2,5,6]
           |
           j
nums2[j]>nums1[i] thus nums1[k]=5
k and j are decremented.

nums1 = [1,2,3,0,5,6]
             |   |
             i   k

nums2 = [2,5,6]
         |
         j
We keep following up this procedure and we get the desired reult.


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
    }
