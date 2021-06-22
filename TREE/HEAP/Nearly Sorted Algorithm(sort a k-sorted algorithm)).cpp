#include <bits/stdc++.h>
using namespace std;

void sortk(int a[],int n,int k) {
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i=0;i<=k;i++)
        pq.push(a[i]);
    int index=0;
    for (int i=k+1;i<n;i++) {
        a[index++]=pq.top();
        pq.pop();
        pq.push(a[index]);
    }
    while (!pq.empty()) {
        a[index++]=pq.top();
        pq.pop();
    }
}
