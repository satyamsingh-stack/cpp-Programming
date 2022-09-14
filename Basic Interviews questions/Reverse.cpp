#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,s=0;
	cin>>n;
	while(n){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	cout<<s<<endl;
	return 0;
}
