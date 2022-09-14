#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,s=0;
	cin>>n;
	while(n){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	cout<<s;
	return 0;
}
