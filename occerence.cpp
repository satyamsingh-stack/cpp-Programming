#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the String:";
    cin>>s1;
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<s1.size();i++)
    {
        count[s1[i]-'a']++;
    }
    char ans='a';
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            ans =i+'a';
        }
    }
    cout<<max<<" "<<ans<<endl;
    return 0;
}