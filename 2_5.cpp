#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c,sum=a+b;
    cout<<"input limit";
    cin>>n;
    for (int i=0;i<n;i++)
        {
            sum+=c;
          c=a+b;
          a=b;
          b=c;


        }
        cout<<"the sum of the series is:"<<sum;
        return 0;

}
