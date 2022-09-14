#include<bits/stdc++.h>
using namespace std;
void decimaltobinary(int n){
	if(n>1)
		decimaltobinary(n/2);
	cout<<n%2<<" ";
}
int main(){
	int n;
	cin>>n;
	decimaltobinary(n);
	return 0;
}
