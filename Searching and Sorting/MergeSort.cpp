class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
      int n1=m-l+1;
      int n2=r-m;
      int left[n1];
      int right[n2];
      for (int i=0;i<n1;i++) {
          left[i]=arr[l+i];
      }
      for (int j=0;j<n2;j++) {
          right[j]=arr[m+1+j];
      }
      //now put back in arr using merging technique
      int i=0,j=0,k=l;
      while (i<n1 and j<n2) {
          if (left[i]<=right[j])
              arr[k++]=left[i++];
          else 
              arr[k++]=right[j++];
          
      }
      while (i<n1) {
          arr[k++]=left[i++];
      while (j<n2)
          arr[k++]=right[j++];
      }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (r > l) {                       //atleast two element should be present
            int m=l+(r-l)/2;
            mergeSort(arr,l,m);             //call mergesort on left side 
            mergeSort(arr,m+1,r);           //call merge sort on right side
            merge(arr,l,m,r);               //merge single array in sorted form
        }
    }
};
