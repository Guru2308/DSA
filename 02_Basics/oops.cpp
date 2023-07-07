#include<iostream>
#include<stdio.h>

using namespace std;

class Rect{
public:
    int length;
    int breadth;


void init(int l, int b){
    length = l;
    breadth = b;
}

int area(){
    return length*breadth;
}

int changeL(int l){
    return length = l;
}
};

int main(){
    Rect r;
    r.init(10,5);
    cout<<r.area()<<endl;
    r.changeL(20);
    cout<<r.area()<<endl;
    
    return 0;
}