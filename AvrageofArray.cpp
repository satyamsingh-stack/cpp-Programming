#include<iostream>
using namespace std;
int main()
{
    int a[100],n,av,s=0;
    cout<<"Enter the size of the Array:";
    cin>>n;
    cout<<"Enter the Element of the Array:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        s=s+a[i];
    }
    av=s/n;
    cout<<"Avrage if the Element is:"<<av;
}