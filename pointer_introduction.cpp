#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    *aptr=20;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    return 0;
}