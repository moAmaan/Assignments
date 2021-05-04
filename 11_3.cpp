#include<bits/stdc++.h>
#define pie 3.14
using namespace std;
class OverloadDemo
{
    double V;
public:

    double volume(double r)
    {
        V=(4/(double)3)*pie*r*r*r;
        return  V;
    }
    double volume(double r,double h)
    {
        V=(1/(double)3)*pie*r*r*h;
        return V;
    }
    double volume(double l,double b,double h)
    {
        V=l*b*h;
        return V;
    }
    void display()
    {
        cout<<V;
    }
};

int main()
{
    OverloadDemo o;
    double r,h,l,b;
    cout<<"enter radius"<<endl;
    cin>>r;
    o.volume(r);
    cout<<"volume of sphere is:";
    o.display();
    cout<<"\nenter radius and height"<<endl;
    cin>>r>>h;
    o.volume(r,h);
    cout<<"volume of cone is:";
    o.display();
    cout<<"\nenter length,breadth,height"<<endl;
    cin>>l>>b>>h;
    o.volume(l,b,h);
    cout<<"volume of cuboid is:";
    o.display();
    return 0;

}

