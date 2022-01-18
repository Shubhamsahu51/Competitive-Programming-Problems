#include <bits/stdc++.h>
using namespace std;
void bubbleSort (int arr[],int n) {
    bool flag = false;
    for (int i = 0 ; i < n-1 ; i++) {             //passes
        for (int j = 0 ; j < n-1-i ; j++) {       
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag =true;
            }
        }
        if (flag == false) {
            cout<<"sorted";
            break;
        }

    }
    
}
int main() 
{ 
    int arr[] = {1,2,3,4}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    for (auto x:arr)
     cout<<x<<" ";
    return 0; 
} 
