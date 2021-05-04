#include<iostream>
using namespace std;
class Student
{
    protected:
    string name;
    long int en_rll;
    int age,marks;
    public:
    void getdata()
    {
        cout<<"Enter student's name:";
        cin>>name;
        cout<<"\nEnter student's enrollment number:";
        cin>>en_rll;
        cout<<"\nEnter student's age:";
        cin>>age;
        cout<<"\nEnter student's total marks:";
        cin>>marks;
    }
   virtual void display()
    {
        cout<<"\nstudent name is:"<<name<<endl<<"enrollment no. is:" <<en_rll<<endl<<"age is:"<<age<<endl<<"marks scored by student :"<<marks;
    }
};
class Faculty
{
    protected:
    string facultyname;
    int facultycode,age,salary;
    char gender;
    string deptt,experience;
    public:
   void getdata()
   {
       cout<<"Enter faculty name:";
       cin>>facultyname;
       cout<<"\nEnter faculty code:";
       cin>>facultycode;
       cout<<"\nEnter faculty age:";
       cin>>age;
       cout<<"\nEnetr faculty salary:";
       cin>>salary;
       cout<<"\nEnter gender of faculty:";
       cin>>gender;
       cout<<"\nEnter department of faculty:";
       cin>>deptt;
       cout<<"\nEnter year's of experience of faculty:";
       cin>>experience; 

   }
    void display()
    {
        cout<<"faculty name: "<<facultyname<<endl<<"faculty age:"<<age<<endl<<"faculty code:"<<facultycode<<endl<"faculty salary :"<<salary<<endl<<"faculty gender:"<<gender<<endl<<"faculty department:"<<deptt<<endl<<"faculty experience :"<<experience<<endl;
    }
};
class Person:public Faculty,public Student
{
    public:
    Person()
    {}
};
int main()
{
    Student s;
    Faculty f;
    Person p;
    p.display();
    return 0;
}
 