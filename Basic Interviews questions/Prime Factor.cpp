#include<bits/stdc++.h>
using namespace std;
void isfactor(int a,int n);
void isprime(int a,int n){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
			return ;
	}
	isfactor(a,n);
}
void isfactor(int a,int n){
	if(n%a==0)
		cout<<a<<" ";
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		isprime(i,n);
	}
	return 0;
}
