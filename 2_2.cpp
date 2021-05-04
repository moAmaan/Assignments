
#include<iostream>
using namespace std;
int fib(int  );
int main()
{
    int n;
    cout<<"input limit";
    cin>>n;
    for (int i=0;i<n;i++)
        cout<<fib(i);
    return 0;


}
int fib(int a)
{
    if (a==0||a==1)
        return a;
    else
        return fib(a-1)+fib(a-2);
}
