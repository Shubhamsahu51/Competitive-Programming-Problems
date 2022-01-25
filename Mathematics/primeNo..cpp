   int isPrime(int N){
        if (N==1)
        return 0;
        for (int i=2;i*i<=N;i++) {
            if (N%i==0)
                return 0;
        }
        return 1;
    }
-------------------------------optimise---------------------------
       int isPrime(int N){
        if (N==1)
            return 0;
        if (N==2 or N==3)
            return 1;
        if (N%2==0 or N%3==0)
            return 0;
        for (int i=5;i*i<=N;i=i+6) {
            if (N%i==0 or N%(i+2)==0)
                return 0;
        }
        return 1;
    }
