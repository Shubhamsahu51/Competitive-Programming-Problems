We are given two strings, A and B.

A shift on A consists of taking string A and moving the leftmost character to the rightmost position. For example, if A = 'abcde', then it will be 'bcdea' after one shift on A. Return True if and only if A can become B after some number of shifts on A.

Example 1:
Input: A = 'abcde', B = 'cdeab'
Output: true

Example 2:
Input: A = 'abcde', B = 'abced'
Output: false
Note:

A and B will have length at most 100.

# Solution-

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.length() != B.length()) 
        return false; 
        string temp = A + A;  
        int p = temp.find(B);
        if(p == -1)
        return false;
        else
        return true;

    }
};

ii)
    
    class Solution {
public:
    bool rotateString(string A, string B) 
    {
        if(A.size() != B.size())
            return false;
        if(A == B)      //compare strings
            return true;
        
        int len = B.size();
        while(len--)
        {
            if(A == B)
                return true;
            A = A.substr(1) + A[0];     // one shift on A
        }
        return false;
    }
};
