#include <stdio.h>

int sum(int n){
    if (n == 0)
        return 0;
    else
        return sum(n-1)+n;
}

int Isum(int n){
    int x = 0;
    for(int i =0; i<=n; i++)
        x = x+i;
    return x;
}

int main(){
    int r = Isum(5);
    printf("%d ",r);
    return 0;
}
