#include <bits/stdc++.h>
using namespace std;
void printSpelling(vector<string>&v,int n) {
 if (n == 0)
    return;
 printSpelling(v,n/10);
 int digit = n % 10;
 cout<<v[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<string>v{"zero","one","two","three","four","five","six","seven","eight","nine"};
    printSpelling(v,n);

    return 0;
}
