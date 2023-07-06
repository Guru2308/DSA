#include<iostream>
#include<stdio.h>

using namespace std;

struct Rect{
    int length;
    int breadth;
}r ;

void init(struct Rect *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(struct Rect *r){
    return r->length*r->breadth;
}

int changeL(struct Rect *r, int l){
    return r->length = l;
}

int main(){
    Rect r;
    init(&r,10,5);
    cout<<area(&r)<<endl;
    changeL(&r, 20);
    cout<<area(&r)<<endl;
    
    return 0;
}