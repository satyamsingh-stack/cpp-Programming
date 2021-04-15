#include<iostream>
using namespace std;
int main()
{
    int r,c,n;
    cout<<"Enter no of row:";
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(c>=1 && c<=r)
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
}