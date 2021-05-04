#include<iostream>
using namespace std;
class Time
{
    int hours,minute,seconds;
    public:
    void gettime()
    {
        cout<<"Give hours(0-24)"<<endl;
        cin>>hours;
        cout<<"Guce minutes(0-60)"<<endl;
        cin>>minute;
        cout<<"Give seconds(0-60)"<<endl;
        cin>>seconds;
    }
    void show()
    {
        cout<<hours<<":"<<minute<<":"<<seconds<<endl;
    }
Time operator+(Time t2)
{
    Time r;

    int f_min,f_hr;
    if(seconds+t2.seconds>60)
    {
        f_min++;
        r.seconds=(seconds+t2.seconds)-60;
    }
    else 
    r.seconds=seconds+t2.seconds;
     if(minute+t2.minute>60)
    {
        f_hr++;
        r.minute=(minute+t2.minute)-60;
    }
    else
    {
        r.minute=minute+t2.minute;
    }
        r.hours=hours+t2.hours;
        r.minute+=f_min;
        r.hours+=f_hr;
    
    return r;
}
};
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

    return 0;


}

