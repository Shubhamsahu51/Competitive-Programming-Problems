class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
 bool isRotated(string A, string B) 
    {
        if(A.size() != B.size())
            return false;
        if (A.size()==0)
        return false;
        
        if (A.size()==1)
        return A[0]==B[0];
        
        if(A == B)      //compare strings
        return true;
        
        string ll , rr ;
        ll = A.substr(2)+A[0]+A[1];
        

        if (ll == B)
        return true;
        
        rr = A.substr(A.size()-2);
        rr += A.substr(0 , A.size()-2);

        //cout<<rr;
        if (rr == B)
        return true;
        
        
        return false;
    }
};
