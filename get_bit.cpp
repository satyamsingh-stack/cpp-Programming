#include<iostream>
using namespace std;
int get_bit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
int main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<get_bit(n,pos)<<endl;
    return 0;
}