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

 
 
struct Item{
    int value;
    int weight;
};
class Solution
{
    public:
     static bool mycmp(Item a, Item b) {
        double tmp1=(double)a.value / (a.weight);
        double tmp2=(double)b.value/ (b.weight);
        return tmp1>tmp2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        sort (arr,arr+n,mycmp);
        double res=0.0;
        for (int i=0;i<n;i++) {
            if (arr[i].weight <= W) {
                res+=arr[i].value;
                W=W-arr[i].weight;
            }
            else {
               res+=arr[i].value*((double)W/arr[i].weight);
               break;
            }
        }
        return res;
        
    }
        
};
