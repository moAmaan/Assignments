#include<iostream>
using namespace std;
class SavingsAccount
{
    float annualinterestRate;
    long int savingsbalance;
    float interest;
public:
    SavingsAccount(float x,long int n)
    {
        annualinterestRate=x;
        savingsbalance=n;
    }
     float calculatemonthlyinterest()
     {
          interest=(savingsbalance*annualinterestRate)/12;
          return interest;
     }
     float newbalance()
     {
         savingsbalance+=interest;
         return savingsbalance;
     }

};
int main()
{
    float n;
    cout<<"balance of saver1 is: Rs8000"<<"\n"<<"balance of saver2 is:Rs5000"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"enter rate of interest :"<<endl;
        cin>>n;
    SavingsAccount saver1(n,8000);
    SavingsAccount saver2(n,5000);
    cout<<"monthly inetrest of saver1 is:"<<saver1.calculatemonthlyinterest()<<endl<<"new balance of saver1 is :"<<saver1.newbalance()<<endl;
    cout<<"monthly inetrest of saver2 is:"<<saver2.calculatemonthlyinterest()<<endl<<"new balance of saver2 is :"<<saver2.newbalance()<<"\n\n";
    }
     return 0;

}
