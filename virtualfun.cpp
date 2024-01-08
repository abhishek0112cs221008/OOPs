#include<iostream>
using namespace std;

class shape
{
    // int a;
    public:
    int a;
    virtual int area()=0;
};
/////////////////////////////////////

class circle :public shape
{
    int r;
    public:
    void radious()
    {
        cout<<"ENTER THE VALUE OF RADIOUS : ";
        cin>>r;
    }
    int area()
    {
        a=3.141*r*r;
        cout<<"Area of circle="<<a<<endl;
        return 0;
    }
};

class ract :public shape
{
    int l,b;
    public:
    void side()
    {
        cout<<"ENTER THE VALUE OF LENGTH : ";
        cin>>l;
        cout<<"\nENTER THE VALUE OF width : ";
        cin>>b;
    }
    int area()
    {
        a=l*b;
        cout<<"Area of Rectangle="<<a<<endl;
        return 0;
    }
};

/////////////////////////////////
int main()
{
    shape *ptr;
    circle c;
    ptr= &c;
    c.radious();
    ptr->area();

    ract r;
    ptr=&r;
    r.side();
    ptr->area();

    return 0;
}