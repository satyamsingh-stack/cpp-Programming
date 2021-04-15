#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int result=max-k;
    if(result>0)
    {
    cout<<result<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}