#include <iostream>
#include <fstream>
using namespace std;

// writing on file

int main()
{
    ofstream fout;
    fout.open("ABHISHEK.txt");

    fout << "Hello Abhishek Patel !!" << endl;
    fout << "Hi Abhishek Patel !!" << endl;

    fout.close();

    return 0;
}

/*
   ios::in                [input/read]
   ios::out               [output/write]
   ios::app               [append]
   ios::ate               [update]
   ios::binary           [binary]
*/