#include<iostream>
using namespace std;
class Room
{
    public:
    float length,breadth,height;
public:
    float area()
    {
        return length*breadth;
    }
    float volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    Room r;
    float l,b,h;
    cout<<"enter length";
    cin>>l;
    cout<<"enter breadth";
    cin>>b;
    cout<<"enter height";
    cin>>h;
    r.length=l;
    r.breadth=b;
    r.height=h;
    cout<<"area is:"<<r.area()<<endl;
    cout<<"volume is:"<<r.volume();
    return 0;
}
