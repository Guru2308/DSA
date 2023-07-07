#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int *A, int n){
    A[0] = 69;
    for(int a=0;a++;a<n){
        cout<<A[a]<<endl;
    }
    cout<<endl<<sizeof(A)/sizeof(int);
}

int main(){

    int A[] = {2,4,6,8,10};
    int n = sizeof(A);
    // for(int x:A){
    //     cout<<x;
    // }
    fun(A,n);

    cout<<endl<<sizeof(A)/sizeof(int);
    return 0;
}