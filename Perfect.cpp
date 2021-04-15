#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the Element:";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        cout<<"Perfect";
    }
    else
    {
        cout<<"Not a Perfect number";
    }
}