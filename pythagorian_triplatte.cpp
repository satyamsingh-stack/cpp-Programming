#include<iostream>
#include<math.h>
using namespace std;
int pythagorian(int x,int y,int z)
{
    int a,b,c;
    a=pow(x,2);
    b=pow(y,2);
    c=pow(z,2);
    if(a+b==c || b+c==a || a+c==b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int result=pythagorian(x,y,z);
    if(result==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}