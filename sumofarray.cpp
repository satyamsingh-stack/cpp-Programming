#include<iostream>
using namespace std;
int main()
{
    int s=0,a[100],n;
    cout<<"Enter the size of the Array:";
    cin>>n;
    cout<<"Enter the Element of the array:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        s=s+a[i];
    }
    cout<<"Sum of the element is:"<<s<<endl;    
}