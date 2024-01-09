#include<iostream>
using namespace std;

int main()
{
    char str1[100];
    cout<<"Enter a string : ";
    cin>>str1;
    cout<<"Your String is (1): "<<str1<<endl;

    cin.ignore();
    char str2[100];
    cout<<"Enter second string : ";
    cin.get(str2,100);
    cout<<"Your String is (2): "<<str2<<endl;

    cin.ignore();
    string str3;
    cout<<"Enter third string : ";
    getline(cin,str3);
    cout<<"Your String is (3): "<<str3<<endl;

    return 0;
}