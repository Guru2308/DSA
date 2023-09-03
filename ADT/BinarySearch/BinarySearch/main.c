//
//  main.c
//  BinarySearch
//
//  Created by Chatheriyan Thangaraju on 27/07/23.
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

int LinearSearch(struct Array arr, int key){
    int l,h,mid;
    l = 0;
    h = arr.length;
    mid = (l+h)/2;
    
    while (l<=h) {
        if(key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid -1;
        else
            h = mid+1;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{2,3,4,5,6},8,10};
    int n = LinearSearch(arr, 4);
    printf("%d ",n);
    
    return 0;
}

