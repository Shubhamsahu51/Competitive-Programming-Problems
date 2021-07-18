i)-BF
class Solution {
public:
    int strStr(string txt, string pat) {
        if (txt==pat)
            return 0;
        if (txt.length()<pat.length())
            return -1;
        int n=txt.length();
        int m=pat.length();
        int i,j;
        for (i=0;i<=n-m;i++) {
            for (j=0;j<m;j++) 
                if (txt[i+j]!=pat[j])
                    break;
            if (j==m) {
                return i;
                break;
            }
        }
     return -1;   
    }
};
