#include<iostream>
using namespace std;

class complex 
{
    int real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int x,int y)
    {
        real=x;
        img =y;
    }
    void show()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    complex operator+(complex const c)
    {
        complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
    }
};

int main()
{
    complex c1(2,4);
    complex c2(3,4);
    complex c3;
    c3=c1+c2;

    c1.show();
    c2.show();
    c3.show();

    return 0;
}