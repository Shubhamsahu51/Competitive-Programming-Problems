#include <bits/stdc++.h>
using namespace std;

// Utility function to get the lower last min
// value of 'n'
int getLowValue(set<int>& lowValue, int& n)
{
    auto it = lowValue.lower_bound(n);
 
    // Since 'lower_bound' returns the first
    // iterator greater than 'n', thus we
    // have to decrement the pointer for
    // getting the minimum value
    --it;
 
    return (*it);
}
 
int max_sum(vector<int>&arr) {
    int n = arr.size();
    vector<int>suffix_arr(n-1,0);
    suffix_arr[n-1] = arr[n-1];
    for (int i = n-2 ; i >= 0 ; i--) {
        suffix_arr[i] = max(suffix_arr[i+1],arr[i]);
    }
    // Initialize set container
    set<int> lowValue;
 
    // Insert minimum value for first comparison
    // in the set
    lowValue.insert(INT_MIN);
 
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (suffix_arr[i + 1] > arr[i]) {
            ans = max(ans, getLowValue(lowValue,
                                       arr[i])
                               + arr[i] + suffix_arr[i + 1]);
 
            // Insert arr[i] in set<> for further
            // processing
            lowValue.insert(arr[i]);
        }
    }
    return ans;
}
int main() {
	vector<int>arr{2,5,3,1,4,9};
	cout<<max_sum(arr);
	return 0;
}
