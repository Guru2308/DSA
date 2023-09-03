//
//  main.c
//  OpsArray
//
//  Created by Chatheriyan Thangaraju on 25/07/23.
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

void append(struct Array *arr, int x){
    if(arr->size > arr->length)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x){
    if(x>=0 && index<=arr->length){
        for(int i= (*arr).length; i > index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}

int delete(struct Array *arr, int index){
    int x = 0;
    if(x >= 0 && index <= arr->length){
        x = arr->A[index];
        for(int i = index; i< arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0 ;
}

int main() {
    struct Array arr = {{2,3,4,5,6},10,5};
    append(&arr, 10);
    insert(&arr, 3, 9);
    printf("\n%d\n ",delete(&arr, 3));
    disp(arr);
    
    return 0;
}
