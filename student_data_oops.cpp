#include<iostream>
using namespace std;
class Students{
    public:
    string name;
    int age;
    string gender;
    void print_info(){
        cout<<"Name";
        cout<<name<<endl;
        cout<<"Age";
        cout<<age<<endl;
        cout<<"Gender";
        cout<<gender<<endl;
    }
};
int main()
{
    Students arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Name:";
        cin>>arr[i].name;
        cout<<"Age:";
        cin>>arr[i].age;
        cout<<"Gender:";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].print_info();
    }
    return 0;
}