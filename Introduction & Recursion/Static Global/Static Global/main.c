#include <stdio.h>
int x =0; //global variable

int fun(int n){
    static int x =0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    
    return 0;
}

int main(void){
    int a = 5;
    printf("%d\n",fun(a));
    
    printf("%d\n",fun(a));
    return 0;
}
