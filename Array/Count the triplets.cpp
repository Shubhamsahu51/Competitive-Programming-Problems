class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count=0;
	    unordered_set<int>s;
	    for (int i = 0 ; i < n ; i++) {
	        s.insert(arr[i]);
	    }
	    for (int i=0;i<n;i++) {
	        for (int j=i+1;j<n;j++) {
	            if (s.find(arr[i]+arr[j]) != s.end()) 
	                count++;
	        }
	    }
	    return count;
	}
};
