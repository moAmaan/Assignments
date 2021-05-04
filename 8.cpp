
#include<bits/stdc++.h>
using namespace std;
class student
{
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
     string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    void set_age(int agem)
    {
        age=agem;
    }
    void set_first_name(string namef)
    {
        first_name=namef;
    }
    void set_last_name(string namel)
    {
        last_name=namel;
    }
    void set_standard(int stdn)
    {
        standard=stdn;
    }
    string to_string()
    {
        stringstream ss;
        char ch=',';
        ss<<first_name<<ch<<last_name<<ch<<age<<ch<<standard;
        return ss.str();
    }


};
int main()
{
    student s;
    int age,stdn;
    string firstn,lastn;
    cout<<"enter age,stdn,first name,last name"<<endl;
    cin>>age>>stdn>>firstn>>lastn;
    s.set_age(age);
    s.set_first_name(firstn);
    s.set_last_name(lastn);
    s.set_standard(stdn);


    cout<<s.get_first_name()<<","<<s.get_last_name()<<endl<<s.get_age()<<endl<<s.get_standard()<<"\n\n"<<s.to_string();
    return 0;
}
