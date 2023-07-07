#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int length, breadth = 0;
    cout<<"Enter length and Breadth: "<<endl;
    cin>>length>>breadth;

    int area = length*breadth;
    int pm = 2*(length+breadth);

    printf("Area: %d\nPerimeter: %d",area,pm);

    return 0;
}