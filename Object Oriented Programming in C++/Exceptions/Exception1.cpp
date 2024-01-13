#include<iostream>
using namespace std;

int main(){
    int x = 16;
    int y = -1;

    try{
        if(y==0){
            throw 505;
        }
        cout<<x/y<<endl;
    }catch(...){
        cout<<"Divisible by 0 condition !!"<<endl;
    }
    return 0;
}