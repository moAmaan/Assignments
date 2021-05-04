#include<iostream>
using namespace std;
int main()
{
    int a[50],b[50],n,k,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for ( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"enter the index"<<endl;
    cin>>k;
        for (i=0;i<n;i++)
        {
            if (k==n)
            {   k=0;
                a[i]=b[k];
                k++;
            }
            else
              {
                a[i]=b[k];
                k++;
              }
        }

    for (i=0;i<n;i++)
    {
        cout<<a[i];

    }
    return 0;
}
