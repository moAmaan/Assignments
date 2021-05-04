#include<iostream>
using namespace std;
int fib(int  );
int main()
{
    int n,term;
    cout<<"input limit";
    cin>>n;

        term=fib(n-1);
        cout<<"nth term is:"<<term;
    return 0;


}
int fib(int a)
{
    if (a==0||a==1)
        return a;
    else
        return fib(a-1)+fib(a-2);
}
