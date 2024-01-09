#include<iostream>
using namespace std;
//C++ program for Multilevel level Inheritance------------------------------

class A
{
public:
    int x,y;

    void getDatax(){
        cout<<"Enter integer x : ";
        cin>>x;
    }
    void getDatay(){
        cout<<"Enter integer y : ";
        cin>>y;
    }
};

class B : public A
{
public:
    void showdatax(){
        cout<<"Integers x : "<<x<<endl;
    }
};

class C : public A
{
public:
    void showdatay(){
        cout<<"Integers y : "<<y<<endl;
    }
};


int main()
{
    cout<<"|------Single Level Inheritance----|"<<endl;
    //object create bottom most class
    C c;
    B b;
    b.getDatax();
    c.getDatay();
    b.showdatax();
    c.showdatay();

    return 0;
}