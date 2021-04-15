#include<iostream>
using namespace std;
void fib(int n)
{
    int a=0;
    int b=1;
    if(n<=0)
    {
        cout<<"Invalid Input"<<endl;
    }
    else if (n==1)
    {
        cout<<a<<endl;
    }
    else if(n==2)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;
        cout<<b<<endl;
        for(int i=2;i<n;i++)
        {
            int c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }
    }
}
 int main()
 {
     int n;
     cout<<"Enter the number of term:";
     cin>>n;
     fib(n);
 }