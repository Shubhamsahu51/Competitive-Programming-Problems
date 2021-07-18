// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n = S.length();
        int low,high;
        int start=0,end=1;
        for (int i=0;i<n;i++) {
            //even length substring
            int low=i-1;
            int high=i;
            while (low>=0 && high<n && S[low]==S[high]) {
                if (high-low+1 > end) {
                    start=low;
                    end=high-low+1;
                }
                low--;
                high++;
            }
            
            //odd length substring
            low=i-1;
            high=i+1;
            while (low>=0 && high<n && S[low]==S[high]) {
                if (high-low+1 > end) {
                    start=low;
                    end=high-low+1;
                }
                low--;
                high++;
            }
        }
        string res=S.substr(start,end);
        return res;
    }
};
