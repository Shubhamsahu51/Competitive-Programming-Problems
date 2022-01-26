void primeFactor(int &n) {
    if (n<=1) return;                 // donothing
    for (int i=2;i*i<=n;i++) {
        while (n%i==0) {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)               //cornercase
        cout<<n;
}
