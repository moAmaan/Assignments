#include<iostream>
using namespace std;
int rec(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+rec(n-1);
    }
}
int main()
{
    int n,sum=0;
    cout<<"enter limit:"<<endl;
    cin>>n;
    rec(n);
    sum=rec(n);
    cout<<"sum is :"<<sum<<endl;
    return 0;
}
