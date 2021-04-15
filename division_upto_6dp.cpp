#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            a=a+1;
        }
        else if(arr[i]<0)
        {
            b=b+1;
        }
        else
        {
            c=c+1;
        }
    }
    cout<<a/double(n)<<endl;
    cout<<b/double(n)<<endl;
    cout<<c/double(n)<<endl;
    return 0;
}
