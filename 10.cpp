#include<iostream>
#include<sstream>
using namespace std;
class employee
{
private:
    int salary;
    int wd;
public:
    string to_string()
    {
        string ch=" ";
        stringstream ss;
        ss << salary << ch << ch << wd;
        return ss.str();
    }
    void setinfo(int sal ,int days)
    {
        salary=sal;
        wd=days;
    }
    void addsal()
    {
        if(salary<700)
        {
            salary+=50;
        }
        else
        {

        }

    }
    void addwork()
    {
        if(wd>6)
        {
            salary+=25;
        }
    }
    int getsal()
    {
        return salary;
    }
};
int main()
{
    employee e;
    int s,d;
    cout<<"enter salary and working days"<<endl;
    cin >> s >> d;
    e.setinfo(s,d);
    e.addsal();
    e.addwork();
    cout<<"updated salary of employee is:"<<e.getsal()<<endl;
    cout<<"final details of employee:\n";
    cout<<"salary   no of hrs of work:\n";
    cout<<e.to_string();
    return 0;
}
