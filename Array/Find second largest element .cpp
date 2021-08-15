class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
        int res=INT_MIN;
        int largest=arr[0];
        bool flag=false;
        for (int i=1;i<arr_size;i++) {
            if (arr[i]>largest) {
                res=largest;
                largest=arr[i];
                flag=true;
            }
            else if (arr[i]!=largest) {
                if (res==INT_MIN or arr[i]>res ) {
                    res=arr[i];
                    flag=true;
                }
            }
                
        }   
        if (flag==true)
        return res;
        else 
        return -1;           //no 2nd largest exits
    }

};
