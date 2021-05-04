#include<iostream>
using namespace std;
class Bank
{
    string name;
    long int accountn;
    double balance;
    char type;
    double new_balance(double amt)
    {
        balance+=amt;
        return balance;
    }
public:
    void input()
    {
        cout<<"enter name of depositer";
       cin>>name;
       cout<<"enter the account no.";
       cin>>accountn;
       cout<<"which type of account"<<endl<<"type C for current"<<endl<<"type S for saving account"<<endl;
       cin>>type;

    }
    int deposit()
    {
        double amt;
        cout<<"enter ammount to deposit";
        cin>>amt;
        cout<<"account balance is :"<<new_balance(amt)<<endl;
    }
    void withdraw()
    {
        int amt;
        cout<<"enter amount to withdraw:"<<endl;
        cin>>amt;
        if(balance<=0)
        {
            cout<<"insufficient balance!!!"<<endl;
        }
        if(amt>balance)
        {
            cout<<"balance is low!!!";
        }
        else
        {
            balance-=amt;
        }
    }
        void display()
        {
            cout<<"\n\n ACCOUNT INFO.";
            cout<<"NAME:"<<name;
            cout<<"ACCOUNT NUMBER:"<<accountn;
            cout<<"ACCOUNT TYPE:"<<type;
            cout<<"BALANCE OF"<<name<<"is:"<<balance;
        }

};

int main()
{
    Bank b;

    int n;
     b.input();
     for(int i=0;i<4;i++)
     {


    cout<<"Features are:\n 1)Deposition\n 2)withdrawal\n 3)Display details"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>n;


    switch (n)
    {
    case 1:
        b.deposit();
        break;
    case 2:
        b.withdraw();
        break;
    case 3:
        b.display();
        break;
    default :
        cout<<"wrong choice";

    }
     }
    return 0;
}

