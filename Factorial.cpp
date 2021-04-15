#include<iostream>
using namespace std;
int main()
{
    int n;
    int f=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        f=f*i;
    }
    cout<<"Factorial of the number is:"<<f;
}