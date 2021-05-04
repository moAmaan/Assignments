#include<bits/stdc++.h>
using namespace std;
class calculator
{
    double a,b;
public:
    calculator(double p,double q)
    {
        a=p;
        b=q;
    }
    double add()
    {
       return a+b;
    }
    double sub()
    {
        return a-b;
    }
    double mul()
    {
        return a*b;
    }
    double div()
    {
        return a/(double)b;
    }
    double power()
    {
        return pow(a,b);
    }
};

int main()
{
    double a,b;
    int n;
        cout<<"enter two values:"<<endl;
        cin>>a>>b;
        calculator c1(a,b);
        do
        {
        cout<<"\n\nMENU\n1:ADDITION\n2:SUBSTRACTION\n3:MULTIPLICATION\n4:DIVISION\n5:POW\n"<<endl;
        cout<<"enter choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"sum of two numbers is:"<<c1.add()<<endl;
            break ;
        case 2:
            cout<<"subtraction of numbers is:"<<c1.sub()<<endl;
            break;
        case 3:
            cout<<"multiplication of last two numbers is:"<<c1.mul()<<endl;
            break;
        case 4:
            cout<<"division of two number is:"<<c1.div()<<endl;
            break;
        case 5:
            cout<<"power to the number is:"<<c1.power()<<endl;
            break;
        case 6:
            break;
        default :
            cout<<"invalid choice"<<endl;

        }
    }while(n!=6);



    return 0;
}
