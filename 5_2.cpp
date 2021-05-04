#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    int a2[n];
    cout<<"enter the elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for (int i=0,start=0,last=n-1;i<n;i++)
        {
            if(a[i]%2==0)
            {
                a2[start]=a[i];
                start++;
            }
            else
            {
                a2[last]=a[i];
                last--;
            }
        }
        cout<<"sorted array is;"<<endl;
        for (int i=0;i<n;i++)
        {
            cout<<a2[i]<<" ";
        }
        return 0;
}
