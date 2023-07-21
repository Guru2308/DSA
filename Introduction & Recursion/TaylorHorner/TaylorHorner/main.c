#include <stdio.h>

double taylor(int x, int n){
    
    //Recursive method
//    static double s;
//    if (n == 0)
//        return s;
//    s = 1+x* s/n ;
//    return taylor(x, n-1);
    
    // Iterative method
    double s;
    for (; n > 0; n--) {
        s = 1+ x*s/n;
    }
    return s;
}

int main() {
    double x = taylor(1, 10);
    printf("%lf ",x);
    return 0;
}
