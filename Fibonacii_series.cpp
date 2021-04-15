#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cout<<"Enter the term:";
    cin>>n;
    if(n==1)
    {
        cout<<a<<endl;
    }
    else if(n==2)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else if(n<=0)
    {
        cout<<"Invalid input"<<endl;
    }
    else
        {cout<<a<<endl;
        cout<<b<<endl;
        for(int i=2;i<n;i=i+1)
    {
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
}
}