#include<iostream>
using namespace std;
int main()
{
    int n;
    int f=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f=f+1;
        }
    }
    cout<<"Total number of factors:"<<f;
}