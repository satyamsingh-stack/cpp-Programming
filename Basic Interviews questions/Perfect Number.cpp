#include<bits/stdc++.h>
using namespace std;
bool isperfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	if(isperfect(n))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
