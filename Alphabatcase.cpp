#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter a number:";
    cin>>c;
    if(c>=65 && c<=90)
    {
        cout<<"Upper Case";
    }
    else if (c>=97 && c<=122)
    {
        cout<<"Lower Case";
    }
    else if(c>=48 && c<=57)
    {
        cout<<"Number";
    }
    else
    {
        cout<<"Special Character";
    }
}