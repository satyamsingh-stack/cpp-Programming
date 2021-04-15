#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Element:";
    cin>>n;
    cout<<"Enter the Element of the Array:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Element which is to be Search:";
    cin>>key;
    int result=linearsearch(arr,n,key);
    if(result==-1)
    {
        cout<<"Element not Found";
    }
    else
    {
        cout<<"Element found at index:"<<result<<endl;
    }
}