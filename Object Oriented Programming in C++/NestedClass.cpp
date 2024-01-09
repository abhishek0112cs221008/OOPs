#include<iostream>
using namespace std;


//main class A
class A
{
public:
    // nested class B
    class B
    {
    private:
        int num;
    public:
        void getData(int n){
            num = n;
        }

        void showData(){
            cout<<"Num is : "<<num<<endl;
        }
    };
};

int main(){
    cout<<"Nested Class in C++"<<endl;
    A::B b;
    b.getData(4);
    b.showData();

    return 0;
}