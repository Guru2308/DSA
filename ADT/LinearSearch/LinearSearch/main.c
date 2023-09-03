//
//  main.c
//  LinearSearch
//
//  Created by Chatheriyan Thangaraju on 26/07/23.
//

#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void disp(struct Array arr){
    for(int i=0; i<arr.length+1; i++)
        printf("%d ",arr.A[i]);
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key){
    for(int i=0;i<(*arr).length;i++){
        if(key == (*arr).A[i]){
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{2,3,4,5,6},8,10};
    int x= LinearSearch(&arr, 5);
    printf("%d\n",x) ;
    disp(arr);
    int x1= LinearSearch(&arr, 5);
    printf("%d\n",x1) ;
    return 0;
}
