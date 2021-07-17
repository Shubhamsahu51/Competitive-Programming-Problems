class Solution{
public:	
		
	string removeDups(string S) 
	{
	    int count[26]={0};
	    string out;
	    for (int i=0;i<S.length();i++) {
	        if (count[S[i]-'a']==0) {
	           count[S[i]-'a']++;
	           out.push_back(S[i]);
	        }    
	    }
	
	    return out;
	}
}
