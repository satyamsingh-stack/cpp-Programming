#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter the to check number:";
    cin>>n;
    int k=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    cout<<s;
    if(k==s)
    {
        cout<<" is Pallindrome";
    }
    else
    {
        cout<<" is not a Pallindrome";
    }
}