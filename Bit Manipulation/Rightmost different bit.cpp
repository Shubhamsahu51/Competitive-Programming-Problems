class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if (m==n)
            return -1;
        int res=m^n;
        
        for (int i=1;i<=32;i++) {
            if ((res & (1<<(i-1))) !=0) {
              return i;
        
            }   
        }
        
        return -1; 
    }
};
