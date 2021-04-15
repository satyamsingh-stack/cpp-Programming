#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int s,a,b,c;
    float area;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter Value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt((s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is:"<<area;
}