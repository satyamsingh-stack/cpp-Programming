#include<iostream>
using namespace std;
int main(){
	int a,b,c,t,i;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a%b!=0){
			c=b-(a%b);
			cout<<c<<endl;
		}
		else{
			cout<<0<<endl;
		}
		
	}
	return 0;
}
