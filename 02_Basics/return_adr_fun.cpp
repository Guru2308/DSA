#include<iostream>
#include<stdio.h>

using namespace std;

int * fun(int size){
    int *p;
    p = new int[size];

    for(int i=0;i<size;i++){
        p[i] = i+1;
        // cout<<p[i]<<endl;
    }
    return p;
}

int main(){
    int *ptr, sz=5;
    
    ptr = fun(sz);

    for(int x=0;x<sz;x++){
        cout<<ptr[x]<<endl;
    }
    return 0;
}