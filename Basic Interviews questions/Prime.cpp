#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	cout<<isprime(n);
	return 0;
}
