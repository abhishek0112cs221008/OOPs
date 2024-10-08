#include<iostream>
using namespace std;

class Complex
{
private:
    int real,imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    void show(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex operator+(Complex &c){
        Complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;
        return t;
    }
};

int main(){
    Complex c1(2,3);
    c1.show();

    
    Complex c2(4,5);
    c2.show();

    Complex c3;
    c3 = c1 + c2;
    c3.show();

    return 0;
}

// class Complex
// {
// private:
//     int real,imag;
// public:
//     Complex(){
//         real = 4;
//         imag = 9;
//     }

//     void show(){
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }

//     Complex operator+(Complex &c){
//         Complex t;
//         t.real = real + c.real;
//         t.imag = imag + c.imag;
//         return t;
//     }
// };

// int main(){
//     Complex c1;
//     c1.show();

    
//     Complex c2;
//     c2.show();

//     Complex c3;
//     c3 = c1 + c2;
//     c3.show();

//     return 0;
// }
