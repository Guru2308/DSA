#include <iostream>
#include <stdio.h>
using namespace std;

struct Rect{
    int length;
    int breadth;
} r;

int main(){
    r = {15,20};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    r.length = 10;
    r.breadth = 15;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    return 0;
}
