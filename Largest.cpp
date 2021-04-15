#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Element of a:";
    cin>>a;
    cout<<"Enter the Element of b:";
    cin>>b;
    cout<<"Enter the Element of c:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Largest number is:"<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"Largest number is:"<<b;
    }
    else
    {
        cout<<"Largest number is:"<<c;
    }
    
}