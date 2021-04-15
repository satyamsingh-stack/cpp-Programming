#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first string:";
    cin>>s1;
    cout<<"Enter second string:";
    cin>>s2;
    if(s1.compare(s2)==0)
    {
        cout<<"Both the Strings are Same"<<endl;
    }
    else
    {
        cout<<"Both the strings are different"<<endl;
    }
    return 0;
}