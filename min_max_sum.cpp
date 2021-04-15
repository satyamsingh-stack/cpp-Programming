#include<iostream>
using namespace std;
int main()
{
    int arr[5],s=0,a,b;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        s=s+arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    b=s-max;
    a=s-min;
    cout<<b<<" "<<a<<endl;
    return 0;
}
