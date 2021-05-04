#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n,sum=0;
    cout<<"input limit";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        sum+=fib(i);
    }
    cout<<"sum of series is:"<<sum;
    return 0;
}
int fib(int a)
{
    if (a==0||a==1)
        return a;
    else
        return fib(a-1)+fib(a-2);
}
