#include<bits/stdc++.h>
using namespace std;
bool isBsearch(int *arr,int l,int h,int key) {
    if (l > h)                      //base case
        return false;
    while (l <= h) {
        int mid = l + (h-l)/2;
        if (arr[mid] == key)
            return true;
        else if (arr[mid] > key)
            return isBsearch(arr,l,mid-1,key);
        else
            return isBsearch(arr,mid+1,h,key);
    }
}
int main () {
    int arr[] = {1,3,2,4,5};
    cout<<isBsearch(arr,0,4,8);
    return 0;
    
}
