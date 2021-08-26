Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

 

Example 1:

Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.


//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
     bool mycmp(pair<int,int>a,pair<int,int>b) {
        double tmp1=(double)a.first / (a.second*1.0);
        double tmp2=(double)b.first/ (b.second*1.0);
        return tmp1>tmp2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<int,int>>ans;
        for (int i=0;i<n;i++) {           //make vector of pair
            Item temp=arr[i];
            int val=temp.value;
            int wt=temp.weight;
            ans.push_back({val,wt});
        }
        sort (ans.begin(),ans.end(),mycmp);
        double res=0.0;
        for (int i=0;i<n;i++) {
            if (ans[i].second <= W) {
                res+=ans[i].first;
                W=W-ans[i].second;
                
            }
            else {
               res+=ans[i].first*((double)W/ans[i].second);
               break;
            }
        }
        return res;
        
    }
        
};
