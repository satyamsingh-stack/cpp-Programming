#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,r,k;
	cin>>n;
	k=n;
	while(n){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==k)
		cout<<"yes";
	else
		cout<<"No";
	return 0;
}
