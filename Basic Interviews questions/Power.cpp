#include<bits/stdc++.h>
using namespace std;
int power(int a,int n){
	if(n==0)
		return 1;
	return a*power(a,n-1);
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<power(a,n);
	return 0;
}
