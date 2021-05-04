#include<iostream>
using namespace std;
class mammal
{
    public:
    void birth()
    {
        cout<<"We gave birth to child!!"<<endl;
    }
};
class human : public mammal
{
    public:
    human()
    {
        cout<<" Human beings are from mammals category!!"<<endl;
    }
};
int main()
{
    human h;
    h.birth();
    return 0;
}