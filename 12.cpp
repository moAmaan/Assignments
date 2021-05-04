#include<bits/stdc++.h>
using namespace std;
class student
{
    string name;
public:
    student()
    {
        name="Unknown";

    }
    student(string ch)
    {
        name=ch;

    }
    string display()
    {
        return name;
    }

};

int main()
{
    string nme;
    student s;
    cout<<"enter name:"<<endl;
    getline(cin,nme);
    student s1(nme);
    cout<<"name by default :"<<s.display()<<endl;
    cout<<"name by user:"<<s1.display()<<endl;
return 0;
}

