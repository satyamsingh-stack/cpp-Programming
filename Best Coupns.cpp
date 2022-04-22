#include<bits/stdc++.h>
using namespace std;
int solution(int x){
	int ans1,ans,res,mn;
	ans=x*10/100;
	res=ans-x;
	mn=INT_MAX;
	ans1=x-100;
	mn=min(ans,ans1);
	if(mn<100)
		return 100;
	return mn;
}
int main(){
	int t,x;
	cin>>t;
	while(t--){
		cin>>x;
		cout<<solution(x)<<endl;
	}
	return 0;
}
