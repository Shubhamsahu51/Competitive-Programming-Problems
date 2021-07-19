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


ii)KMP ALGO-
     vector<int> kmpProcess(string pat) {              //build lps[]         
        int n = pat.size();
        vector<int> lps(n, 0);
        for (int i = 1, len = 0; i < n;) {
            if (pat[i] == pat[len]) {
                lps[i++] = ++len;
            } 
            else if (len!=0) {
                len = lps[len - 1];
            } 
            else {
                lps[i++] = 0;
            }
        }
        return lps;
    }
    
    void strStr(string txt, string pat) {                //using lps[] find pattern in tt string
        int m = txt.size(), n = pat.size();
        if (!n) {
            return 0;
        }
        vector<int> lps = kmpProcess(pat);
        for (int i = 0, j = 0; i < m;) {
            if (txt[i] == pat[j]) {                 //char matched moved both i and j
                i++, j++;
            } 
            if (j == n) {                           //pattern matched in txt
                cout<< i - j<<" ";                  //print all index where pattern matched.(if only 1st index need to print then return here only).
                j = lps[j-1];                       //moved to index whic is in lps[j-1]
            }
            if (i < m && txt[i] != pat[j]) {        //when char does not match
                ( j!=0 ) ? j = lps[j - 1] : i++;
            }
        }
        return -1;
    }
