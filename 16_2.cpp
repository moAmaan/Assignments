#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r, int i)
    {
        real=r;
        img=i;
    }
    complex operator+(complex ob1)
    {
        complex r;
        r.real=ob1.real+real;
        r.img=ob1.img+img;
        return r;
    }
    complex operator-(complex ob1)
    {
        complex r;
        r.real=real-ob1.real;
        r.img=ob1.img-img;
        return r;
    }
    void display(complex ob1, complex ob2, char ch)
    {
        cout<<real<<" ";
        if (ob1.img<ob2.img)
        {
           cout<<"+"<<" "<<img*(-1)<<"i"<<endl;
        }
        else 
        cout<<"+"<<" "<<img<<"i"<<endl;
    } 
};
int main()
{
    int rr,ii;
    char c1,c2;
    cout<<"enter first complex number: "<<endl;
    cin>>rr>>c1>>ii>>c1;
    complex a(rr,ii);
    cout<<"enter second complex number :"<<endl;
    cin>>rr>>c2>>ii>>c2;
    complex b(rr,ii);
    cout<<"addition of complex no is :"<<endl;
    complex x,y;
    x=a+b;
    x.display(a,b,c1);
    cout<<"subtraction of complex no is:"<<endl;
    y=a-b;
    y.display(a,b,c2);
    return 0;




}
