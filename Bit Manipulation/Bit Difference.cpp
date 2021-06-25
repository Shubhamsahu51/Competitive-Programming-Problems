You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.



class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
    int n=a^b;           //x-or will give all differnt bits as set bit
    int res=0;       
    while (n>0) {        //now count all set bit in n
        n=(n&(n-1));
        res++;
    }
    return res;
    }
};
