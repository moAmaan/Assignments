#include<iostream>
using namespace std;
class time
{
    int sec,min,hour;
    public:
    time()
    {
        sec=0;
        min=0;
        hour=0;
    }
    time(int s,int m,int h)
    {
        sec=s;
        min=m;
        hour=h;
    }
    time add(time x,time y)
    {
        time r;
        int c_mm=0;
        int c_hh=0;
        if(x.sec+y.sec>59)
        {
            c_mm++;
            r.sec=(x.sec+y.sec)-60;
        }
        else 
        r.sec=x.sec+y.sec;
        if(x.min+y.min>59)
        {
            c_hh++;
            r.min=(x.min+y.min)-60;
        }
        else
        
            r.min=x.min+y.min;
            r.hour=x.hour+y.hour;
            r.hour+=c_hh;
            r.min+=c_mm;
            return r;
        
    }
    void display()
    {
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
};
int main()
{
    int ss,mm,hh;
    char c;
    cout<<"Enter first time in hh:mm:ss"<<endl;
    cin>>hh>>c>>mm>>c>>ss;
    time a1(ss,mm,hh);
    cout<<"Enter second time in hh:mm:ss"<<endl;
    cin>>hh>>c>>mm>>c>>ss;
    time b1(ss,mm,hh);
    time result;
    cout<<"resultant time is: ";
    result.add(a1,b1);
    result.display();
    return 0;



}