#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int>>&ans) {
    for (int i=0;i<ans.size();i++) {
        for (int j=0;j<ans[i].size();j++) 
            cout<<ans[i][j]<<" ";
            
    
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>>outer;
    int m,n;
    cin>>m>>n;
    for (int i=0;i<m;i++) {
        vector<int>inner;
        for (int i=0;i<n;i++) {
            int x;
            cin>>x;
            inner.push_back(x);
        }
        outer.push_back(inner);
    }
    print(outer);
    return 0;
}
