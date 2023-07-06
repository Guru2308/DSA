#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int num1=10, num2=15;
    swap(&num1, &num2);
    cout<<num1<<endl<<num2<<endl;
}