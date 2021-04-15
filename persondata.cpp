#include<iostream>
using namespace std;
void person(string name,string city,int age=20)
{
    cout<<name<<endl;
    cout<<city<<endl;
    cout<<age<<endl;
}
int main()
{
    person("Satyam Singh","Varanasi");
}