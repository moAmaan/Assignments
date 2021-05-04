#include<iostream>
#include<cstring>
using namespace std;
class Box
{
    int length,breadth,height;
    public:
        Box()
        {
            length=0;
            breadth=0;
            height=0;
        }
        Box(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;

        }
        int get_length()
        {

            return length;
        }
        int get_breadth()
        {

            return breadth;
        }
        int get_height()
        {

            return height;
        }
         long long calculatevolume()
        {
            return length*breadth*height;

        }


};
int main()
{
    Box b1,b2,b3;
    int l,b,h;
    for (int i=0;i<4;i++)

    {
     if(i==1)
    {
         cout<<"enter length ,breadth,height"<<endl;
     cin>>l>>b>>h;
        Box b1(l,b,h);
    cout<<" length of box:"<<b1.get_length()<<endl;

    cout<<" breadth of box:"<<b1.get_breadth()<<endl;

    cout<<" height of box:"<<b1.get_height()<<endl;

    cout<<"volume of the box is:"<<b1.calculatevolume()<<endl;
    }
    if (i==2)
    {
         cout<<"enter length ,breadth,height"<<endl;
     cin>>l>>b>>h;
         Box b2(l,b,h);
    cout<<" length of box:"<<b2.get_length()<<endl;

    cout<<" breadth of box:"<<b2.get_breadth()<<endl;

    cout<<" height of box:"<<b2.get_height()<<endl;

    cout<<"volume of the box is:"<<b2.calculatevolume()<<endl;
    }
    if(i==3)
    {
         cout<<"enter length ,breadth,height"<<endl;
     cin>>l>>b>>h;
         Box b3(l,b,h);
    cout<<" length of box:"<<b3.get_length()<<endl;

    cout<<" breadth of box:"<<b3.get_breadth()<<endl;

    cout<<" height of box:"<<b3.get_height()<<endl;

    cout<<"volume of the box is:"<<b3.calculatevolume()<<endl;
    }

    }


    return 0;

}
