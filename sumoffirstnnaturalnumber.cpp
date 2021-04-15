#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum of the Number is:"<<sum(n)<<endl;
    return 0;
}