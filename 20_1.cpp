#include<iostream>
using namespace std;
class student
{
    private:
    int ID;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter student's ID:"<<endl;
        cin>>ID;
        cout<<"Enter student's name:"<<endl;
        cin>>name;
    }
    void putdata()
    {
        cout<<"Student's ID is:"<<ID<<endl;
        cout<<"Student's name is:"<<name<<endl;
    }
};
 class physical : public student
 {
     int height;
     float weight;
     public:
     void getphy()
     {
         cout<<"Enter student's height in cm:"<<endl;
         cin>>height;
         cout<<"Enter student's weight in kg:"<<endl;
         cin>>weight;
     }
     void putphy()
     {
         cout<<"Student's height is:"<<height<<"cm"<<endl;
         cout<<"Student's weight is:"<<weight<<"kg"<<endl;
     }
 };
 int main()
 {
     physical p;
     p.getdata();
     p.putdata();
     p.getphy();
     p.putphy();
     return 0;
 }
