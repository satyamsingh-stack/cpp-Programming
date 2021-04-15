#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            c=c+1;
        }
    }
    cout<<c<<endl;
    return 0;
}