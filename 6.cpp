#include<iostream>
using namespace std;
int main()
{
    int a[256]={0};
    cout<<"enter a string"<<endl;
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        a[str[i]]++;
    }
    int odd=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if(a[i]&1)
        {
            odd++;
        }
    }
    if (odd>1)
    {
        cout<<"entered string cannot be rearranged to form a pallindrome";
    }
    else
    {
        cout<<"entered string can be rearranged to form a pallindrome";
    }
    return 0;
}
