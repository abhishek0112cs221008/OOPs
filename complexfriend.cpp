#include<iostream>
using namespace std;

class complex
{
private:
    int real,imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int x,int y)
    {
        real=x;
        imag=y;
    }
    void show()
    {
        cout<< "complex number ="<<real<< " - i "<<imag<<endl;
    }
    friend complex operator-(complex,complex);
};

complex operator-(complex c1,complex c2)
{
    complex t;
    t.real=c1.real-c2.real;
    t.imag=c1.imag-c2.imag;
    return t;
}

int main()
{
    complex c1(4,8);
    complex c2(2,3);
    complex c3;
    c3=c1-c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}
