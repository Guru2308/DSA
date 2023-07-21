#include <stdio.h>

int f(int n){
    if(n > 100)
        return n-10;
    return f(f(n+11));
}

int main() {
    int r = f(30);
    printf("%d ",r);
    return 0;
}
