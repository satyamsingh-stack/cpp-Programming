#include<iostream>
using namespace std;
int set_bit(int n,int pos)
{
    return (n | (1<<pos));
}
int main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<set_bit(n,pos);
}