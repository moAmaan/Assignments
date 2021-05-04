#include <iostream>
using namespace std;
class Senior
{
private:
    int val_pri;

protected:
    char val_pro;

public:
    float val_pub;
    Senior()
    {
        val_pri = 10;
        val_pro = 'X';
        val_pub = 42.77;
    }
    void info()
    {
        cout << "\n\nderived / base\t | private | protected | public |" << endl;
    }
};
class forprivate : private Senior
{
public:
    forprivate()
    {
        cout << "\n\n\tfor private \nprotected :" << val_pro << endl;
        cout << "public:" << val_pub << endl;
    }
    void info()
    {
        cout << "private task1\t | 0 | 1 | 1 | " << endl;
    }
};
class forprotected : protected Senior
{
public:
    forprotected()
    {
        cout << "\n\n\tfor protected \nprotected : " << val_pro << endl;
        cout << "public: " << val_pub << endl;
    }
    void info()
    {
        cout << "protected task2\t | 0 | 1 | 1 | " << endl;
    }
};
class forpublic : public Senior
{
public:
    forpublic()
    {
        cout << "\n\n\tfor public\npublic : " << val_pub << endl;
    }
    void info()
    {
        cout << "public task3\t | 0 | 0 | 1 | " << endl;
    }
};
int main()
{
    Senior s;
    forprivate pri;
    forprotected pro;
    forpublic pub;
    s.info();
    pri.info();
    pro.info();
    pub.info();
    cout << "\n\nExplanation : base class - private can be accessed by only base class whereas ";
    cout << "public and protected data members can be acessed by derived class." << endl;
    return 0;
}
