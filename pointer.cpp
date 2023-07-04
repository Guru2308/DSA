#include <iostream>
#include <stdio.h>

using namespace std;

int main(){ 
    // int A[5] = {2,4,6,8,10};
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p = new int[5]; //new creates a memory in heap
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }

    delete [ ] p; free(p); // free in C; delete in CPP
     for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}
