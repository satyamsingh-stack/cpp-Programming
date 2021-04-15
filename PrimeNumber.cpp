#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter the Number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c>2)
    {
        cout<<"Not a Prime number";
    }
    else
    {
        cout<<"Prime Number";
    }
}