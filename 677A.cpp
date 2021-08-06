#include<iostream>
using namespace std;
int main(){
	int n,t,i,s1=0,h;
	cin>>t>>h;
	for(i=0;i<t;i++){
		cin>>n;
		if(n>h)
			s1=s1+2;
		else if(n<=h)
			s1++;
	}
	cout<<s1<<endl;
	return 0;
}
