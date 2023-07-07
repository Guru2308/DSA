#include<iostream>
#include<stdio.h>

using namespace std;

template <class T>
class Arithmetic{
    private:
        T a, b;
    public:
        Arithmetic(T a, T b);
        int add();
        int sub();

};
        template <class T>
        Arithmetic<T>::Arithmetic(T a, T b){
            this->a = a;
            this->b = b;
        }

        template <class T>
        int Arithmetic<T>::add(){
            return a+b;
        }

        template <class T>
        int Arithmetic<T>::sub(){
            return a-b;
        }

int main(){ 
    Arithmetic ar(10,12);
    cout<<ar.add()<<endl<<ar.sub()<<endl;

    return 0;
}