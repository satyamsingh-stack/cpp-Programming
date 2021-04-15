#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    for(int i=0;i<st.size();i++)
    {
        if(islower(st[i]))
        {
            st[i]=toupper(st[i]);
        }
        else
        {
            st[i]=tolower(st[i]);
        }
    }
    cout<<st<<endl;
    return 0;
}