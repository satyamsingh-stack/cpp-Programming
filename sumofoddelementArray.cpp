#include<iostream>
using namespace std;
int main()
{
    int a[100],n,s=0;
    cout<<"Enter the Size of the Array:";
    cin>>n;
    cout<<"Enter the element of the Array:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    cout<<"Sum of the Odd element is:"<<s;
}