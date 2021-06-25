class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
       if (n==0)
          return 0;
       int count=1;
       while (n>0) {
           if (n&1==1) {
              return count;
           }
           else {
               n=n>>1;
               count++;
           }
       }
       return count;
    }
};
