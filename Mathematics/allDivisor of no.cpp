
void allDivisor(int &N) {
    for (int i=1;i*i<=N;i++) {
        if (N%i==0) {
            cout<<i<<" ";
            if (i != N/i)
                cout<<N/i<<" ";
        }
    }
}

