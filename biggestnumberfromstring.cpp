#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the String:";
    cin>>s1;
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<"The Greatest number made by it is:"<<s1<<endl;
    return 0;
}