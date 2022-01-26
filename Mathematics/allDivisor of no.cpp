
void allDivisor(int &N) {
    for (int i=1;i*i<=N;i++) {
        if (N%i==0) {
            cout<<i<<" ";
            if (i != N/i)
                cout<<N/i<<" ";
        }
    }
}

void allDivisor(int &N) {
    int i;
    for (int i=1;i*i<N;i++) {
        if (N%i==0) 
            cout<<i<<" ";
    }
    for ( ; i>=1;i--) {
        if (N%i == 0)
            cout<<N/i<<" ";
    }
}
