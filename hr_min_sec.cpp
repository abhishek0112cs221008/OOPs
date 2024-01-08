#include<bits/stdc++.h>
using namespace std;

class Time
{
private:
    int hour,minute,second;
public:
    Time()
    {
      hour=0;
      minute=0;
      second=0;
    }
     Time(int h,int m,int se)
    {
        hour=h;
        minute=m;
        second=se;
    }
    void show()
    {
        cout<<hour<< ":"<<minute<< ":"<<second<<endl;
    }
    void normalize()
    {
        minute=minute+second/60;
        second=second%60;
        hour=hour+minute/60;
        minute=minute%60;
    }
        Time operator +( Time t)
    {
         Time o;
        o.hour=hour+t.hour;
        o.minute=minute+t.minute;
        o.second=second+t.second;
        o.normalize();
        return (o);
    }
};

int main()
{
     Time t1(2,50,49);
     Time t2(2,43,20);
     Time t3;
    t3=t1+t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}
