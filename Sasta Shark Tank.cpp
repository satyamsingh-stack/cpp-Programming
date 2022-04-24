#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int ans1=a*100/10;
		int ans2=b*100/20;
		if(ans1==ans2)
			cout<<"ANY"<<endl;
		else if(ans1>ans2)
			cout<<"FIRST"<<endl;
		else
			cout<<"SECOND"<<endl;
	}
	return 0;
}
