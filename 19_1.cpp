#include<iostream>
using namespace std;
class Time
{
    int hours,minute,seconds;
    public:
    Time()
    {
        hours=0;
        minute=0;
        seconds=0;
    }
    void gettime()
    {
        cout<<"Give hours(0-24)"<<endl;
        cin>>hours;
        cout<<"Gice minutes(0-60)"<<endl;
        cin>>minute;
        cout<<"Give seconds(0-60)"<<endl;
        cin>>seconds;
    }
    void show()
    {
        cout<<hours<<":"<<minute<<":"<<seconds<<endl;
    }
    friend Time operator+(Time,Time);
};
Time operator+(Time t1,Time t2)
{
    Time r;
    int f_min=0,f_hr=0;
    if(t1.seconds+t2.seconds>60)
    {
        f_min++;
        r.seconds=(t1.seconds+t2.seconds)-60;
    }
    else 
    r.seconds=t1.seconds+t2.seconds;
     if(t1.minute+t2.minute>60)
    {
        f_hr++;
        r.minute=(t1.minute+t2.minute)-60;
    }
    else
    {
        r.minute=t1.minute+t2.minute;
    }
        r.hours=t1.hours+t2.hours;
        r.minute+=f_min;
        r.hours+=f_hr;
    
    return r;
}
int main()
{
    Time a,b,out;
    cout<<"Give two time for addition"<<endl;
    a.gettime();
    cout<<"Give time for second object"<<endl;
    b.gettime();
    out=a+b;
    cout<<"Resultant Time is:";
    out.show();
   // a.show();
    return 0;


}

