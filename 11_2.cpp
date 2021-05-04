#include<bits/stdc++.h>
using namespace std;
class Consdemo
{
public:
    void sumdemo(int n,char ch)
    {
        if(ch=='p')
        {
            cout<<"sqaure of number is:"<<n*n<<endl;
        }
        else
        {
            cout<<"cube of the number is:"<<n*n*n<<endl;
        }
    }
    void sumdemo(int n,int a,char ch)
            {
                if(ch=='a')
                {
                    cout<<"addition of two number is:"<<n+a<<endl;
                }
                else
                {
                    cout<<"ASCII value of"<<" ch is:"<<int(ch)<<endl;
                }
            }
            void sumdemo(string s,string t)
            {
                if(s==t)
                {
                    cout<<"strings are equal"<<endl;
                }
                else
                {
                    cout<<"string are not equal"<<endl;
                }
            }
};

int main()
{
    Consdemo c;
    int n,m;
    char ch;
    string s1,s2;
    cout<<"enter a number and character"<<endl;
    cin>>n>>ch;
    c.sumdemo(n,ch);
    cout<<"enter two number and a character"<<endl;
    cin>>n>>m;
    cin>>ch;
    c.sumdemo(n,m,ch);
    cout<<"enter two strings"<<endl;
    cin>>s1>>s2;
    c.sumdemo(s1,s2);
    return 0;
}
