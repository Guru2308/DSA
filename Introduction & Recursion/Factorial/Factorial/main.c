#include <stdio.h>

int Ifact(int n){
    if(n==0)
        return 0;
    else{
        int x = 1;
        for(int i=1; i<=n; i++)
            x = x*i;
        return x;
    }
}

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int main() {
    int r = fact(6);
    printf("%d ",r);
    return 0;
}
