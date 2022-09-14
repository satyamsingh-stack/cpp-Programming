#include<bits/stdc++.h>
using namespace std;
void fib(int n){
	int a=0;
	int b=1;
	if(n==0)
		cout<<0<<endl;
	if(n==1){
		cout<<0<<endl;
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
		cout<<1<<endl;
		int c,temp;
		for(int i=2;i<n;i++){
			c=a+b;
			a=b;
			b=c;
			cout<<c<<endl;
		}
	}
}
int main(){
	int n;
	cin>>n;
	fib(n);
	return 0;
}
