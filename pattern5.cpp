#include<iostream>
using namespace std;
int main()
{
    int r,c,n;
    cout<<"Enter the number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}