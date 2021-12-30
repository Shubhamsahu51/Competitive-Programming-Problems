#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int n) {
    if (n==1)
        return true;
    if (arr[0] < arr[1] and isSorted(arr+1,n-1))
        return true;
    else
        return false;
}
int main () {
    int arr[] = {1,3,2,4,5};
    cout<<isSorted(arr,5);
    return 0;
    
}
