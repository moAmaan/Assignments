#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"sorted array is:"<<endl;
    int start=0,pos=1,last=n-1;
    for (int i=0;i<n;i++)
    {
        if(pos%2==0)
        {
            cout<<a[start]<<"\t";
            start++;
        }
        else
        {
            cout<<a[last]<<"\t";
            last--;
        }
        pos++;
    }
    return 0;
}
