#include<iostream>
using namespace std;

class Distance
{
public:
    int inch,feet;
    Distance()
    {
        inch=0;
        feet=0;
    }
    Distance(int i,int f)
    {
        inch=i;
        feet=f;
    }
    void show()
    {
        cout<<inch<< "inches :: "<<feet<< "foot"<<endl;
    }
    friend Distance operator+(Distance &,Distance &);
};
Distance operator+(Distance &o1,Distance &o2)
{
        Distance d;
        d.inch=o1.inch + o2.inch;
        d.feet=o1.feet + o2.feet;
        return d;
}

int main()
{
    Distance o1(2,4);
    Distance o2(3,6);
    Distance o3;
    o3=o1+o2;
    o3.show();
    return 0;
}
