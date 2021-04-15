#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cout<<"Enter Value of a,b,c,d:";
    cin>>a>>b>>c>>d;
    e=sqrt(pow((c-a),2)+pow((d-b),2));
    cout<<"Distance between these two points are:"<<e;
}