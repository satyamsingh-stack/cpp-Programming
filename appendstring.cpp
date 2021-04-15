#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first word";
    cin>>s1;
    cout<<"Enter second word";
    cin>>s2;
    // cout<<s1+s2<<endl;
    cout<<"After appending the word is:"<<s1.append(s2)<<endl;
    return 0;
}