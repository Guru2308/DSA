//  Fibonacci

#include <stdio.h>

int fib(int n){
    int F[n];
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1)
            return fib(n-2);
        if(F[n-1] == -1)
            return fib(n-1);
        return fib(n-2)+fib(n-1);
    }
}

int main() {
    int x = fib(6);
    printf("%d ",x);
    return 0;
}
