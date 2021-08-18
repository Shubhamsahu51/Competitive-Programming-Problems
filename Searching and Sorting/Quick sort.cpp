#include <bits/stdc++.h>
using namespace std;

int partition (int A[],int l,int h) {
    int pivot = A[l];
    int i =l,j=h;
    do {
        do {i++;}while(A[i]<=pivot);
        do {j--;}while (A[j]>pivot);
        if (i < j) {
            swap (A[i],A[j]);
        }
    }while (i < j);
    
    swap(A[l],A[j]);
    return j;
}
void quicksort (int A[],int l,int h) {
    //base case
    if (l >= h)
        return;
    //Recursive call
    int p = partition (A,l,h);
    //apply quick sort on left side 
    quicksort (A,l,p);
    //apply quick sort on right side
    quicksort (A,p+1,h);
}

int main () {
    int A[] = {50,70,60,90,40,80,10,20,30};
    int n = sizeof(A)/sizeof(int);
    quicksort (A,0,n);
    for (int i=0;i<n;i++)
        cout << A[i] <<" ";
    
    return 0;
}
