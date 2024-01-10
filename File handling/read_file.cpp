#include<iostream>
#include<fstream>
using namespace std;

//reading file

int main()
{
    ifstream fin; //read file
    fin.open("ABHISHEK.txt");
    char ch;
    // fin>>ch;
    ch  = fin.get();

    while(!fin.eof()){
        cout<<ch;
        // fin>>ch;
        ch  = fin.get();
    }
    fin.close();
    return 0;
}