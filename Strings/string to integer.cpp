#include <bits/stdc++.h>
using namespace std;
int stringToint(string &s,int n) {
    if (n == 0)
        return 0;
    int digit = s[n-1] - '0';
    int smallAns = stringToint(s,n-1);
    return smallAns*10+digit;

}
int main()
{
   string s;
   cin>>s;
   cout<<stringToint(s,s.length());

    return 0;
}
