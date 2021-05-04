#include<iostream>
using namespace std;
class Vehicle
{
    public:
    void display()
    {
        cout<<"This is a vehicle"<<endl;
    }
};
class Car : public Vehicle
{
    public:
    void display()
    {
        cout<<"This is a Car"<<endl;
    }
};
class Bike : public Vehicle
{
    public:
    void display()
    {
        cout<<"This is a Bike"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of tyres in a vehicle:\n for example \n2 for bike \n 4 for car"<<endl;
    cout<<"Number of tyres:";
    cin>>n;
    if(n==2)
    {
        Bike b;
        b.display();
    }
    else if(n==4)
    {
        Car c;
        c.display();
    }
    else
    {
        Vehicle v;
        v.display();
    }
    return 0;
    
}