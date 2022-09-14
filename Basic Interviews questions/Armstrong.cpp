#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,s=0,k;
	cin>>n;
	k=n;
	while(n){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(k==s)
		cout<<"YES"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
