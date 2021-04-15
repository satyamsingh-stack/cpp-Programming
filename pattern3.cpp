#include<iostream>
using namespace std;
int main()
{
    int n=4,r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(c>=1 && c<=n+1-r)
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
}