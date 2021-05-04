#include<iostream>
using namespace std;
class Lecture
{
    int time;
public:
    Lecture()// FUNCTION 1
    {
        time=40;
        cout<<"Lecture starts now"<<endl;
    }
    void Lab()// FUNCTION 2
    {
        cout<<"Lab is on"<<endl;
    }
    Lecture(int duration)// FUNCTION 3
    {
        time=duration;
        cout<<"Lecture starts now"<<endl;
    }
};
int main()
{
    int t;
    Lecture l;// FOR EXECUTION OF FUNCTION 1
     cout<<"enter time duration:"<<endl;
    cin>>t;
    Lecture l2(t);// FOR EXECUTION OF FUNCTION 3
    return 0;
}

// In this code Ffunction 1 is constructor and;
// function 2 is parametrized constructor.
