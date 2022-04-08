#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y,m;
	cin>>t;
	while(t--){
		cin>>x>>y>>m;
		if(x*m<y)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
