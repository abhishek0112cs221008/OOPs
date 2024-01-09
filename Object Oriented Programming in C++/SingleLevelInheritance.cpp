#include <iostream>
using namespace std;
// C++ program for single level Inheritance------------------------------

class A
{
public:
    int x, y;

    void getData()
    {
        cout << "Enter two integer : ";
        cin >> x >> y;
    }
};

class B : public A
{
public:
    void showdata()
    {
        cout << "Integer is : " << x << " & " << y << endl;
    }
};

int main()
{
    cout << "------Single Level Inheritance----" << endl;
    B b; // object create bottom most class

    b.getData();
    b.showdata();

    return 0;
}