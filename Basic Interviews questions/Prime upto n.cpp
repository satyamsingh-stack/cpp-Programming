#include<bits/stdc++.h>
using namespace std;
bool isprime(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(isprime(i))
			cout<<i<<" ";
	}
	return 0;
}
