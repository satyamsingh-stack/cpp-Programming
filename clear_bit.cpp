#include<iostream>
using namespace std;
int clear_bit(int n,int pos)
{
    int mask= ~(1<<pos);
    return (n & mask);
}
int main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<clear_bit(n,pos);
}