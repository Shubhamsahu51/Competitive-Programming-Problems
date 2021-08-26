Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.


Example 1:

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output: 
1
Explanation:
A person can perform only one of the
given activities.




class Solution
{
    public:
    bool mycmp(pair<int,int>a , pair<int,int>b) {
        return (a.second < b.second );
    }
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>>ans;      //make pair of start and end time
        for (int i=0;i<n;i++) {
            ans.push_back({start[i],end[i]});
        }
        sort(ans,ans+n,mycmp);
        int res=1;                     //1st activiity is always in solution
        int prev=0;                    //1st activiity is always in solution therefor index=0 is included
        for (int curr=1;curr<n;curr++) {
            if (ans[curr].first >= ans[prev].second) {
                res++;
                prev=curr;
            }
            
        }
        return res;
    }
};
