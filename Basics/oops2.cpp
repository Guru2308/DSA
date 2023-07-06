#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(){
             length = 0;
             breadth = 0;
        }
        Rectangle(int l, int b){
             length = l;
             breadth = b;
        }

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }

        void setLength(int l){
            length =l;
        }
        void setBreadth(int b){
            breadth =b;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        ~Rectangle(){
            cout<<"Destructor";
        }
};

int main(){
    Rectangle r(15,15);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(20);
    r.setBreadth(20);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;


    return 0;
}