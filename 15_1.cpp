#include<iostream>
using namespace std;
class first
{
    public:
    int a,b;
    public:
    first()
    {
        a=0;
        b=0;
    }
    first(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b; 
    }
    friend first swap1(first);
};
class second
{
    public:
    
    int a1,b1;
    public:
    second()
    {
        a1=0;
        b1=0;
    }
   second(int x1,int y1)
    {
        a1=x1;
        b1=y1;
    }
    void dislay()
    {
        cout<<a1<<" "<<b1;
    }
    friend second swap2(second);
};
first swap1(first f)
{
    first temp;
    temp.a=f.a;
    f.a=f.b;
    f.b=temp;
    return temp;
}
second swap2(second s)
{
    second temp;
    temp.a1=s.a1;
    s.a1=s.b1;
    s.b1=temp.a1;
    return temp;
}
int main()
{
   int m,n;
   cout<<"Enter two values to be swapped:"<<endl;
   cin>>m>>n;
   first f(m,n);
   cout<<"Before swapping values are:"<<endl;
   f.display();
   cout<<"After swapping values are:"<<endl;
   f.swap1(f);
   f.display();
   cout<<"Enter two values to be swapped:"<<endl;
   cin>>m>>n;
   second s(m,n);
   cout<<"Before swapping values are:"<<endl;
   s.dislay();
   cout<<"After swapping values are:"<<endl;
   s.swap2(s);
   s.dislay();
  return 0;

}