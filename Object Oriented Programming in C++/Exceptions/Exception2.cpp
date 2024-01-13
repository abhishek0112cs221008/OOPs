#include <iostream>
using namespace std;
// exception handling in c++


int division(int a, int b)
{
    if (b == 0)
    {
        throw "Divisible by zero condition !!";
    }

    return a / b;
}

int main()
{
    int x, y;
    int z;

    cout << "Enter numerator :";
    cin >> x;

    cout << "Enter denominator :";
    cin >> y;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}