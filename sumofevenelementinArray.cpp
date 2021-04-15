#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the Size of the Element:";
    cin>>n;
    int a[n];
    cout<<"Enter the Element of the Array:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    cout<<"Sum of even element is:"<<s<<endl;
}