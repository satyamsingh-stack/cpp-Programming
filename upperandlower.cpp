#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="satyam singh";
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<"In Uppercase:"<<s1<<endl;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<"To Lower Case:"<<s1<<endl;
    return 0;
}