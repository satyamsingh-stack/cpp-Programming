#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int beg,end,mid;
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];
    cout<<" Enter the Element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Element which is to be search:";
    cin>>key;
    int result=binarysearch(arr,n,key);
    if(result==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element at index:"<<result<<endl;
    }
    return 0;
}