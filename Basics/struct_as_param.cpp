#include<iostream>
#include<stdio.h>

using namespace std;

struct Rect{
    int length;
    int breadth;
}r;
//==================================
//passing by value

int area(struct Rect r1){
    return r1.breadth*r1.length;
}

int main(){
    struct Rect r = {10,5};
    cout<<area(r);
    return 0;
}

//==================================
//passing by reference

int changeL(struct Rect &r1, int l){
    return r.length = l;
}

int main(){
    struct Rect r = {10,5};
    changeL(r,20);
    cout<<r.length<<endl;
    return 0;
}

//==================================
//passing by Address

int changeL(struct Rect *r1, int l){
    return r1->length = l;
}

int main(){
    struct Rect r = {10,5};
    changeL(&r,20);
    cout<<r.length<<endl;
    return 0;
}

//==================================
//passing by pointer in heap

struct Rect *fun(){
    struct Rect *p;
    p = new Rect;
    p->length = 100, p->breadth = 99;
    return p;
}

int main(){
    struct Rect *ptr = fun();
    cout<<ptr->breadth<<endl<<ptr->length<<endl;
    return 0;
}