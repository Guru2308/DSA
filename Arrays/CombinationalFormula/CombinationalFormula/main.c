//
//  main.c
//  CombinationalFormula
//
//  Created by Chatheriyan Thangaraju on 19/07/23.
//

#include <stdio.h>

int comb(int n, int r){
    if(r==0 | n==r)
        return 1;
    else
        return comb(n-1, r-1)+comb(n-1, r);
}

int main(int argc, const char * argv[]) {
    int x = comb(5 , 3);
    printf("%d ",x);
    return 0;
}
