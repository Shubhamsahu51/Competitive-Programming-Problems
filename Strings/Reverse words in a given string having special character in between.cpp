Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
**********************************************************************************************************

string reverseWords(string S) 
    { 
      string ans="";
      vector<string>temp;
      for (int i=0;i<S.size();i++) {
          if (S[i]=='.') {
              temp.push_back(ans);
              ans="";
          }
          else
            ans+=S[i];
      }
      temp.push_back(ans);
      string res="";
      int i=0;
      for (int i=temp.size()-1;i>0;i--) {
          res+=temp[i];
          res+='.';
      }
      res+=temp[0];
      return res;
    } 
