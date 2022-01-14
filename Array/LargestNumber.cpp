class Solution{
public:
    bool comp(string a,string b) {
        string x=a.append(b);
        string y=b.append(a);
        return x>y;
    }
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<int> &arr) {
	    string ans="";
	    vector<string>str;
	    int count=0;
	    for (int i=0;i<arr.size();i++) {
	        if (arr[i] == 0) count++;
	        str.push_back(to_string(arr[i]));
	    }
	    if (count==arr.size()) return "0";
	    sort(str.begin(),str.end(),comp);
	    for (int i=0;i<str.size();i++) ans+=str[i];
	    return ans;
	}
};
