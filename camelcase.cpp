#include<iostream>
using namespace std;
int main()
{
    int v,n;
    cin>>v;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v==arr[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}