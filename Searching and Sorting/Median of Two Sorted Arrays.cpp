class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() > nums2.size())                         //to make nums1 smaller and before initialising check it
            nums1.swap(nums2);
        
        int n1 = nums1.size(), n2 = nums2.size();
        
        int l = 0, h = n1;
        
        while(l <= h){
            
            int i1 = (l+h)/2;                                       //binary search on nums1
            int i2 = (n1+n2+1)/2 - i1;
             
            int max1 = (i1 == 0  ? INT_MIN : nums1[i1-1]);     
            int max2 = (i2 == 0  ? INT_MIN : nums2[i2-1]);    

            int min1 = (i1 == n1 ? INT_MAX : nums1[i1]);       
            int min2 = (i2 == n2 ? INT_MAX :  nums2[i2]);      
            
            double maxl = max(max1,max2);
            double minr = min(min1,min2);
            
            if(maxl <= minr){                       //calculate median and stop binary search as we got all values in left smaller than on right
                if((n1+n2)%2 == 0)                  //if even no.
                    return (maxl+minr)/2;
                return maxl;                        //odd no. 
            }
            else if(min1 < max2)                    //continue bianry search
                l = i1 + 1;
            else 
                h = i1 - 1;
        }
        return 0;
    }
};
***********************************************gfg solution************************************
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums2.size()<nums1.size()) {
            nums1.swap(nums2);
        }
        int n1=nums1.size();
        int n2=nums2.size();
        int begin1=0,end1=n1;                        //observe
        while (begin1 <= end1) {
            int i1=(begin1+end1)/2;
            int i2=(n1+n2+1)/2-i1;
            int min1=(i1==n1?INT_MAX:nums1[i1]);
            int max1=(i1==0?INT_MIN:nums1[i1-1]);
            int min2=(i2==n2?INT_MAX:nums2[i2]);
            int max2=(i2==0?INT_MIN:nums2[i2-1]);
            if (max1<=min2 and max2<=min1) {
                if ((n1+n2)%2==0)
                    return ((double)(max(max1,max2)+min(min1,min2))/2);
                else 
                    return ((double)max(max1,max2));
            }
            else if (max1 > min2)
                end1=i1-1;
            else
                begin1=i1+1;
            
        }
        return 0;
        
    }

};
