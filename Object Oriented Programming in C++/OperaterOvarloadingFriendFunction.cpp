#include<iostream>
using namespace std;

class Complex
{
private:
    int real,imag;
public:
    Complex(){
        real = 4;
        imag = 9;
    }

    void show(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    friend Complex operator+(Complex & , Complex &);
};


Complex operator+(Complex &obj1 , Complex &obj2){
    Complex t;
    t.real = obj1.real + obj2.real;
    t.imag = obj1.imag + obj2.imag;
    return t;
}


int main(){
    Complex c1;
    c1.show();

    
    Complex c2;
    c2.show();

    Complex c3;
    c3 = c1 + c2;
    c3.show();

    return 0;
}