#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the side of the triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c && a==c)
    {
        cout<<"Equilateral Triangle";
    }
    else if(a!=b && a!=c && a!=b)
    {
        cout<<"Scalan Triangle";
    }
    else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
    {
        cout<<"Isoscelas Triangle";
    }
    else
    {
        cout<<"Invalid Input";
    }
    

}