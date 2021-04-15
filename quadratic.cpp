#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float x,y;
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));
    if(d>0)
    {
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real"<<x<<y;
    }
    else if(d==0)
    {
        x=-b/(2*a);
        y=-b/(2*a);
        cout<<"Roots are Real and Equal:"<<x<<y;
    }
    else
    {
        cout<<"Roots are Imaginary";
    }

}