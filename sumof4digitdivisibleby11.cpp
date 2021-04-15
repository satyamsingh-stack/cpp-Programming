#include<iostream>
using namespace std;
int main()
{
    int s=0;
    for(int i=1001;i<=9999;i=i+11)
    {
        s=s+i;
    }
    cout<<s;
}