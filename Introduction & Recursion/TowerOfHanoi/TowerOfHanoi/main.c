//
//  main.c
//  TowerOfHanoi
//
//  Created by Chatheriyan Thangaraju on 19/07/23.
//

#include <stdio.h>

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        printf("from %d to %d\n ",A,C);
        TOH(n-1, B, A, C);
    }
}

int main(int argc, const char * argv[]) {
    int n = 3;
    int A = 1;
    int B = 2;
    int C = 3;
    TOH(n, A, B, C);
    return 0;
}
