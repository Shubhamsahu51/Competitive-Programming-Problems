Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
 

Example 2:

Input:
n = 5
A[] = {1,2,3,4,0}
Output: 4 0
 

Your Task:
You don't need to read input or print anything. The task is to complete the function leader() which takes array A and n as input parameters and returns an array of leaders in order of their appearance.

 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

 

Constraints:
1 <= n <= 107
0 <= Ai <= 107




*************************************Solution**************************

I) BF-O(N^2)

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>v;
        v.reserve (n);
        for (int i=0;i<n;i++)  {
            bool flag =false;
            for (int j=i+1;j<n;j++) {
                if (a[j]>a[i]) {
                    flag=true;
                    break;
                }
            }
            if (flag==false)
            v.push_back(a[i]);
        }
        return v;
        
    }
};


ii)-Using Stack-T(n)=o(N),s(n)=O(N)
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        stack<int>st;
        vector<int>ans;
        st.push(arr[n-1]);
        for (int i=n-2;i>=0;i--) {
            if (st.top()<=arr[i])             //will work for adjacent equal elements also
                st.push(arr[i]);
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};

iii) OPTIMISE-O(N)
vector<int> leaders(int a[], int n){
        int curr_leader=a[n-1];
        vector<int>v;
        v.reserve(10000000);
        v.push_back(curr_leader);
        for (int i=n-2;i>=0;i--) {
            if (a[i]>=curr_leader){
                curr_leader=a[i];
                v.push_back(curr_leader);
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
