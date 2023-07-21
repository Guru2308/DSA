#include <stdio.h>

int power(int m, int n){
    if(n==0)
        return 1;
    return power(m, n-1)*m;
}

int power_opt(int m, int n){
    if(n==0)
        return 1;
    else if (n%2==0)
        return power_opt(m*m, n/2) ;
    return m * power_opt(m*m, (n-1)/2);
}

int main() {
    int r = power_opt(2, 5);
    printf("%d ",r);
    return 0;
}
