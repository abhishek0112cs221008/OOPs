#include<iostream>
using namespace std;
//C++ program for Multilevel level Inheritance------------------------------

class A
{
public:
    int x,y;

    void getData1(){
        cout<<"Enter a integer : ";
        cin>>x;
    }
};

class B : public A
{
public:
    void getData2(){
        cout<<"Enter second integer : ";
        cin>>y;
    }
};

class C : public B
{
public:
    void showdata(){
        cout<<"Integers is : "<<x<<" & "<<y<<endl;
    }
};


int main()
{
    cout<<"|------Single Level Inheritance----|"<<endl;
    C c; //object create bottom most class
    c.getData1();
    c.getData2();
    c.showdata();

    return 0;
}