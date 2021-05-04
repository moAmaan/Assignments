#include<iostream>
using namespace std;
int main()
{
    int i,n,low,high,index=0;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    int arr[n],res[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter low and high value"<<endl;
    cin>>low>>high;
    for(i=0;i<n;i++)
    {
        if (arr[i]<low)
        {
            res[index]=arr[i];
            index++;
        }
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]>=low&&arr[i]<=high)
        {res[index]=arr[i];
        index++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            res[index]=arr[i];
            index++;
        }
    }
    for (i=0;i<n;i++)
    {
        cout<<res[i]<<" ";

    }
    return 0;

}
