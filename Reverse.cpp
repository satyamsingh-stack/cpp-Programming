#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        int last_digit=n%10;
        s=s*10+last_digit;
        n=n/10;
    }
    cout<<s;
}