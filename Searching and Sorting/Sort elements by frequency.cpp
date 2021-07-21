
Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.
#include <bits/stdc++.h>
using namespace std;
 
// Used for sorting by frequency. And if frequency is same,
// then by appearance
bool sortByVal(const pair<int, int>& a,
                      const pair<int, int>& b)
{
 
   // If frequency is same then sort by index
   if (a.second == b.second) 
       return a.first < b.first;
 
   return a.second > b.second;
}
 
// function to sort elements by frequency
vector<int>sortByFreq(int a[], int n)
{
 
   vector<int>res;
 
   unordered_map<int, int> m;
 
   vector<pair<int, int> > v;
 
   for (int i = 0; i < n; ++i) {
 
       // Map m is used to keep track of count 
       // of elements in array
       m[a[i]]++;     
   }
 
   // Copy map to vector
   copy(m.begin(), m.end(), back_inserter(v));
 
   // Sort the element of array by frequency
   sort(v.begin(), v.end(), sortByVal);
 
   for (int i = 0; i < v.size(); ++i) 
      while(v[i].second--)
      {
              res.push_back(v[i].first);
      }
 
   return res;
}
 
// Driver program
int main()
{
   int T;
   cin>>T;
   while (T--) {
   int n;
   cin>>n;
   int a[n];
   for (int i=0;i<n;i++) {
       cin>>a[i];
   }
   
   vector<int>res;
   res = sortByFreq(a, n);
 
   for(int i = 0;i < res.size(); i++)
         cout<<res[i]<<" ";
   cout<<endl;
   }
   return 0;
   
}
