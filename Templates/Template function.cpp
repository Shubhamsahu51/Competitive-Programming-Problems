#include<bits/stdc++.h>
using namespace std;
template <class T>
T myMax(T x, T y ) {
    return (x>y)?x:y;
}
int main () {
    cout<<myMax(10,5)<<endl;
    cout<<myMax('c','g');
    return 0;
}
