#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="What";
    s1.clear();
    if(s1.empty())
    {
        cout<<"String is not present"<<endl;
    }
    else
    {
        cout<<"String is there"<<endl;
    }
    return 0;
}