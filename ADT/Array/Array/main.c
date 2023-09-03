//
//  main.c
//  Array
//
//  Created by Chatheriyan Thangaraju on 21/07/23.
//

#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void disp(struct Array arr){
    for(int i=0; i<arr.length+1; i++)
        printf("%d ",arr.A[i]);
}

int main() {
    struct Array arr;
    printf("Enter size of array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;
    int n;
    printf("Enter no. of digits: ");
    scanf("%d",&n);
    
    printf("Enter all elements: \n");
    for(int i =0; i<n; i++)
        scanf("%d",&arr.A[i]);
    arr.length = n;
    disp(arr);
    
    return 0;
}
