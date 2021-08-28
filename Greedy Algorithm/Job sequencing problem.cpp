/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool mycmp (Job a ,Job b) {
        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort (arr,arr+n,mycmp);
        int result[n];
        bool slot[n];
        for (int i=0;i<n;i++) {
            slot[i]=false;
        }
        for (int i=0;i<n;i++) {
            for (int j=min(n,arr[i].dead)-1;j>=0;j--) { //placed in latest possible slot
                if (slot[j]==false) {
                    result[j]=i;
                    cout<<result[j]<<" ";
                    slot[j]==true;
                    break;
                }
            }
        }
        int res=0,count=0;
        vector<int>ans;
        for (int i=0;i<n;i++) {
            if (slot[i]==true) {
                count++;
                res+=arr[result[i]].profit;
                
            }
        }
        ans.push_back(count);
        ans.push_back(res);
        return ans;
        
    } 
};
