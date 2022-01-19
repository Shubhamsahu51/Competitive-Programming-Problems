#include <bits/stdc++.h>
using namespace std;
void Sorting (int arr[],int n) {
    for (int i=1;i<n;i++) {
        int x=arr[i];
        int j=i-1;
        while (j>=0 and arr[j] > x) {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=x;
    }
    
}
int main() 
{ 
    int arr[] = {8,5,7,4}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    Sorting(arr, n); 
    for (auto x:arr)
     cout<<x<<" ";
    return 0; 
}
