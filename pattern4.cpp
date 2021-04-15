#include<iostream>
using namespace std;
int main()
{
    int r,n,c;
    cout<<"Enter a number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n+1;c++)
        {
            if(c>=1 && c<=r+1)
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
}