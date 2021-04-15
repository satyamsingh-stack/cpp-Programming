#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num)
{
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c=c+1;
        }
        if(c>2)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    cout<<"Enter starting point:";
    cin>>a;
    cout<<"Enter ending point:";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
}