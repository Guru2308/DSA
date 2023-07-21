#include <stdio.h>

void f(int n){
    if (n > 0) {
        printf("%d", n);
        f(n-1);
        f(n-1);
    }
}

int main() {
    f(3);
    printf("\n");
    return 0;
}
