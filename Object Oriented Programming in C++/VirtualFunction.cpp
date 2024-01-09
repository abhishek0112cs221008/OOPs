#include<iostream>
using namespace std;

//C++ program for virtual function

class A
{
public:
    virtual void print(){
        cout<<"print from base class A "<<endl;
    }

    void show(){
        cout<<"show from base class A "<<endl;
    }
};

class B : public A
{
public:
    void print(){
        cout<<"print from derived class B "<<endl;
    }

    void show(){
        cout<<"show from derived class B "<<endl;
    }
};

int main(){
    A *ptr;
    B obj;
    ptr  = &obj;
    ptr ->print();
    ptr ->show();
    return 0;
}