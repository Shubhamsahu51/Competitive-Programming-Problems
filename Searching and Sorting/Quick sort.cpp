#include <bits/stdc++.h>
using namespace std;
    
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[high]; //take end elemenet as pivot element
        int i=low;
        for (int j=low;j<=high-1;j++) {
            if (arr[j] < pivot) {
                swap(arr[i],arr[j]);
                i++;
            }
        }
        swap(arr[i],arr[high]);       //got pivot element right position
        return i;
    }

    void quickSort(int arr[], int low, int high)
    {
        if (low >= high)
            return;
        int p = partition (arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }

int main () {
    int A[] = {50,70,60,90,40,80,10,20,30};
    int n = sizeof(A)/sizeof(int);
    quicksort (A,0,n-1);
    for (int i=0;i<n;i++)
        cout << A[i] <<" ";
    
    return 0;
}
