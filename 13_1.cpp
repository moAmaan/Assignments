#include<iostream>
using namespace std;
class TollBooth
{
    int carNO;
    double totalmoney;
public:
    TollBooth()
    {
        carNO=0;
        totalmoney=0;
    }
    void paycar()
    {
        carNO++;
        totalmoney+=0.5;
    }
    void nonpaycar()
    {
        carNO++;
    }
    void display()
    {
        cout<<"total car number is:"<<carNO<<endl<<"total money is :"<<totalmoney<<endl;
    }
};
int main()
{
    TollBooth t;
    char choice;
    do
    {
    cout<<"select option\nP:PAYCAR\nN:NONPAYCAR\nE:DISPLAY"<<endl;
    cout<<"enter option:"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 'P':
        t.paycar();
        break;
        case 'N':
        t.nonpaycar();
        break;
        case 'E':
        t.display();
        break;
        default :
            cout<<"wrong option!!!!";

    }
    }while (choice!='E');

    return 0;
}
