//  2DArray
//
//  Created by Chatheriyan Thangaraju on 20/07/23.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    //First method - Naive
    int A[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    //Second method - One pointer One array
    int *B[2];
    B[0] = (int *)malloc(3*sizeof(int));
    B[1] = (int *)malloc(3*sizeof(int));
    
    //Third method - Double pointer
    int **C;
    C = (int *)malloc(2*sizeof(int));
    
    C[0] = (int *)malloc(3*sizeof(int));
    C[1] = (int *)malloc(3*sizeof(int));
    
    return 0;
}
