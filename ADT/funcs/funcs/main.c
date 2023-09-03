//
//  main.c
//  funcs
//
//  Created by Chatheriyan Thangaraju on 01/09/23.
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

int Get(struct Array arr, int index){
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int key){
    if(index>=0 && index<arr->length)
        arr->A[index] = key;
}

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i = 1; i< arr.length; i++){
        if(arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    for(int i = 1; i< arr.length; i++){
        if(arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    for(int i=0; i< arr.length; i++){
        sum = sum+ arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr){
    return (float) Sum(arr)/arr.length;
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{2,3,4,5,6},8,10};
    Set(&arr, 2, 3);
//    int x = Get(arr, 2);
//    int x = Max(arr);
//    int x = Min(arr);
    float x = Avg(arr);
    printf("%f\n",x);
    return 0;
}
