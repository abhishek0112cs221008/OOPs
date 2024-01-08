#include<iostream>
using namespace std;

/// base class /////////////////
class base
{
    public:
    int a,b;
    void rectarea()
    {
        int area;
        cout<<"enter the value of a & b :"<<endl;
        cin>>a>>b;
        area=a*b;
        cout<<"area of ractangle = \t"<<area<<endl;
    }
};
//////////////////single inheritance/////////////////////
class child1 :public base
{
    int side;
    public:
    void square()
    {
        cout<<"enter the side of square";
        cin>>side;
        cout<<"area of square is:\t"<<side*side<<endl;
    }
};
///////////////////////hierarchical inheritance/////////////////////////////// 
class child2:public base
{
    int r;
    public:
    void circle()
    {
        cout<<"enter the radius of circle :";
        cin>>r;
        const float pi=3.14;
        cout<<"area of circle =\t"<<pi*r*r<<endl;
    }
};

//////////////////////////////////////////////////////

int main()
{
    child2 obj;
    obj.rectarea();

    child1 o;
    o.square();
    obj.circle();
    return 0;

}