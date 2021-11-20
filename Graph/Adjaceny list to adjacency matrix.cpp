#include <bits/stdc++.h>
using namespace std;
void convert(vector<vector<int>>&a) {
    vector<vector<int>>adj(a.size());
    
    for (int i=0;i<a.size();i++) {
        for (int j=0;j<a[i].size();j++) {
            if (a[i][j]==1)
                adj[i].push_back(j);
        }
    }
    for (int i=0;i<a.size();i++) {
        for (int x:adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> a;
    vector<int> p({0, 0, 1});
    vector<int> q({0, 0, 1});
    vector<int> r({1, 1, 0}); // adjacency matrix
    a.push_back(p);
    a.push_back(q);
    a.push_back(r);
    
   
    convert(a);
    return 0;
}
