#include<iostream>
using namespace std;
class student
{
    protected:
    int ID;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter student ID:"<<endl;
        cin>>ID;
        cout<<"Enter student's name:"<<endl;
        cin>>name;
    }
    void showdata()
    {
        cout<<"Student's ID is :"<<ID<<endl;
        cout<<"Student's name is:"<<name<<endl;
    }
};
class marks
{
    protected:
    int m1,m2,m3;
    public:
    void getmarks()
    {
        cout<<"Enter marks for English, Mathematics, Science:"<<endl;
        cin>>m1>>m2>>m3;
    }
    void showmarks()
    {
        cout<<"English:"<<m1<<endl;
        cout<<"Mathematics:"<<m2<<endl;
        cout<<"Science:"<<m3<<endl;
    }
};
class result : public student, public marks
{
  
    int total;
    float avg;
     public:
     void show()
    {
        total=m1+m2+m3;
        avg=total/(float)3;
        cout<<"Total of marks scored by studet in english, mathematics ,science:"<<total<<endl;
        cout<<"average of total marks os the student:"<<avg;
    }
};
int main()
{
    result r;
    cout<<"Enter student's details:"<<endl;
    r.getdata();
    cout<<"Student's details are as follows:"<<endl;
    r.showdata();
    cout<<"Enter marks scored by student in English, Mathematics, Science:"<<endl;
    r.getmarks();
    cout<<"Details of subjectwise marks:"<<endl;
    r.showmarks();
    r.show();
    return 0;

}