#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool c=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            c=0;
            break;
        }
    }
    if(c==true)
    {
        cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not Pallindrome"<<endl;
    }
    return 0;
}