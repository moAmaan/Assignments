#include<bits/stdc++.h>
using namespace std;
class userone
{
    string Name;
    string MotherName;
    string FatherName;

public:
    char gender;
    void inputinfo()
    {
        cout<<"enter name:"<<endl;
        cin>>Name;
        cout<<"enter mother's name:"<<endl;
        cin>>MotherName;
        cout<<"enter father's name:"<<endl;
        cin>>FatherName;
        cout<<"enter gender(M/F)"<<endl;
        cin>>gender;
    }
   friend bool usercheck();

}a;

class usertwo
{
    string Name;
    string MotherName;
    string FatherName;

public:
    char gender;
    void inputinfo()
    {
        cout<<"enter name:"<<endl;
        cin>>Name;
        cout<<"enter mother's name:"<<endl;
        cin>>MotherName;
        cout<<"enter father's name:"<<endl;
        cin>>FatherName;
        cout<<"enter gender(M/F)"<<endl;
        cin>>gender;
    }
    friend bool usercheck();
}b;
bool usercheck()
{
    if(a.FatherName==b.FatherName&&a.MotherName==b.MotherName)
        return true;
        else
        {
            return false;
        }
}

int main()
{
    userone a;
    usertwo b;
    cout<<"enter first family details:"<<endl;
    a.inputinfo();
    cout<<"enter second family deails:"<<endl;
    b.inputinfo();
    if(usercheck())
    {
        cout<<"belongs to same family"<<endl;
        if(a.gender=='M'&&a.gender==b.gender)
        {
            cout<<"we are brothers"<<endl;
        }
        else if(a.gender=='F'&&a.gender==b.gender)
        {
            cout<<"we are sisters"<<endl;
        }
        else
        {
            cout<<"we are brother and sister"<<endl;
        }
    }
    else
    {
        cout<<"belongs to diffenent family"<<endl;
    }
    return 0;
}
