//Time Comp: O(log n)
#include<bits/stdc++.h>
using namespace std;
int btod(int n){
	int r,dec,base;
	while(n){
		r=n%10;
		n=n/10;
		dec+=r*base;
		base=base*2;
	}
	return dec;
}
int main(){
	int n;
	cin>>n;
	cout<<btod(n);
	return 0;
}
