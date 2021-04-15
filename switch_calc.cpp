#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char op;
    cout<<"Enter first element:";
    cin>>a;
    cout<<"Enter secound element:";
    cin>>b;
    cout<<"Enter the operator:";
    cin>>op;
    switch(op)
    {
        case '+':
        {
            c=a+b;
            cout<<c<<endl;
            break;
        }
        case '-':
        {
            if(a>b)
            {
                c=a-b;
                cout<<c<<endl;
            }
            else
            {
                c=b-a;
                cout<<c<<endl;
            }
            break;
        }
        case '*':
        {
            c=a*b;
            cout<<c<<endl;
            break;
        }
        case '/':
        {
            if(a>b)
            {
                c=a/b;
                cout<<c<<endl;
            }
            else
            {
                c=b/a;
                cout<<c<<endl;
            }
            break;
        }
        default:
        {
            cout<<"We are still Learning"<<endl;
            break;
        }
    }
}