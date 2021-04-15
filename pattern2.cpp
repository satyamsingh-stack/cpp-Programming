#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter no of rows:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(c>=1 && c<=n-r)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
}