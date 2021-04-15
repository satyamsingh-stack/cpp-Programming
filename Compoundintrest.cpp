#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t,a,CI;
    cout<<"Enter value of P:";
    cin>>p;
    cout<<"Enter value of R:";
    cin>>r;
    cout<<"Enter value of T:";
    cin>>t;
    a=p*pow((1+(r/100)),t);
    CI=a-p;
    cout<<"Compound Intrest is:"<<CI;
}