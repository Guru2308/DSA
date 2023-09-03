
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

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr){
    int *B;
    int i,j;

    B = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0; i--, j++){
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length-1;i++){
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j;
    for(i=0, j=arr->length-1; i<j; i++, j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}

int main() {
    struct Array arr = {{2,3,4,5,6},10,5};
    Reverse(&arr);
    disp(arr);
    printf("\n");
    Reverse2(&arr);
    disp(arr);
    
    return 0;
}
