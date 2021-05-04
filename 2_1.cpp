#include<iostream>
using namespace std;
int main ()
{
    int a=0,b=1,c,n;
    cout<<"input limit";
    cin>>n;
    for (int i=0;i<n;i++)
    { cout<<a;
       c=a+b;
       a=b;
       b=c;
    }
    return 0;
}
