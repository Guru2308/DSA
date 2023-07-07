#include <iostream>
#include <stdio.h>

using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int x = 10;
    int y = 5;
    int z = add(x, y);
    cout<<z<<endl;
}