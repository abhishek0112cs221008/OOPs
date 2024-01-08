#include<iostream>
using namespace std;

class student
{
    
    public:
    int rno;
    void getrollno()
    {
        cout<<"enter your rollnumber number";
        cin>>rno;
    }
    void putrollno()
    {
        cout<<"your roll number is: \t"<<rno;
    }
};


class test:virtual public student
{
    
    public:
    int m1,m2;
    void getmarks()
    {
        cout<<"enter your m1 marks:";
        cin>>m1;

        cout<<"enter your m2 marks:";
        cin>>m2;
    }
    void putmarks()
    {
        cout<<"your marks is: \t"<<m1<<"\t"<<m2;
    }
};


class sports:public virtual student
{
   
    public:
     int score;
    void getscore()
    {
        cout<<"enter your score:";
        cin>>score;
    }
    void putscore()
    {
        cout<<"your sports marks is: \t"<<score;
    }
};



class result : public test,public sports
{
    int total;
    public:
    void display()
    {
        total=m1+m2+score;
        cout<<"your marks is: \t"<<total;
        putrollno();
        putmarks(); 
        putscore(); 
    }
};

int main()
{
    result r;
    r.getrollno();
    r.getmarks();
    r.getscore();
    r.display();
    return 0;
}
