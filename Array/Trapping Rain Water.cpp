iven an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
*************************************************************Solution****************************************************************
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0)                         //corner case
        {
            return 0;
        }
        int res=0;
        int n=height.size();
        int lmax[n];
        int rmax[n];
        lmax[0]=height[0];
        for (int i=1;i<n;i++) 
            lmax[i]=max(height[i],lmax[i-1]);
        rmax[n-1]=height[n-1];
        for (int i=n-2;i>=0;i--) 
            rmax[i]=max(rmax[i+1],height[i]);
        for (int i=1;i<n-1;i++) {
            res+=min(lmax[i],rmax[i])-height[i];
        }
    return res;
    }
    
};
