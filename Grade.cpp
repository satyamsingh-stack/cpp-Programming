#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    float per=1;
    cout<<"Enter the marks obtain in Physic:";
    cin>>a;
    cout<<"Enter the markes obtain in Math:";
    cin>>b;
    cout<<"Enter the marks obtain in Chemistery:";
    cin>>c;
    sum=a+b+c;
    cout<<sum<<endl;
    per=(sum/3);
    cout<<per<<"%"<<endl;
    if(per>=91 && per<=100)
    {
        cout<<"A Grade";
    }
    else if(per>=81 && per<=90)
    {
        cout<<"B Grade";
    }
    else if(per>=71 && per<=80)
    {
        cout<<"C Grade";
    }
    else
    {
        cout<<"Fail";
    }
    
}