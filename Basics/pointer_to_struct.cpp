#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rect{
    int length;
    int breadth;
} r;

int main(){
    // Rect r = {10,5};
    // cout<<r.breadth<<endl<<r.length<<endl;

    Rect *p = &r;
    // cout<<(*p).breadth<<endl<<p-> length<<endl;
    p = new Rect; // => CPP
    // p = (struct Rect*)malloc(sizeof(struct Rect)); // => C
    p->breadth = 5;
    p->length = 10;
    cout<<(*p).breadth<<endl<<p-> length<<endl;
    return 0;
}