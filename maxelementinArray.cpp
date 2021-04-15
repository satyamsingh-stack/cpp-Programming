#include<iostream>
using namespace std;
int main()
{
    int n,max=0,min=0;
    cout<<"Enter the Size of the Array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum Element of the Array is:"<<max;
}