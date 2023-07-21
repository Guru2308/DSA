//  HeapArray => Changing size of arrays in heap memory
//
//  Created by Chatheriyan Thangaraju on 20/07/23.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *p = (int *)(malloc(5*sizeof(int)));
    p[0] = 1;p[1] = 3;p[2] = 5;p[3] = 7;p[4] = 9;
    int *q = (int *)(malloc(10*sizeof(int)));
    q[0] = 2;q[1] = 4;q[2] = 6;q[3] = 8;q[4] = 10;
    
    for(int i =0;i<5;i++)
        q[i] = p[i];
    free(p);
    p = q; 
    q = NULL;
    
    for(int i =0;i<5;i++)
        printf("%d ",p[i]);
    
    return 0;
}
