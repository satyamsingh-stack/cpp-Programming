#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],n,s=0;
    cout<<"Enter the size of the Array:";
    cin>>n;
    cout<<"Enter the Element of the First Array:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Element of the Second Array:";
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    cout<<"Sum of two Array is:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]+b[i]<<endl;
    }
    return 0;
}