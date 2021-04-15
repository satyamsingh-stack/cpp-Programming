#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter the number:";
    cin>>n;
    int k=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(k==s)
    {
        cout<<"This is Armstrong number";
    }
    else
    {
        cout<<"Not a Armstrong Number";
    }
}