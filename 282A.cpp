#include<iostream>
using namespace std;
int main(){
	int n,i,ans=0;
	string st;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>st;
		if(st[0]=='-'||st[1]=='-'){
			ans--;
		}
		if(st[0]=='+'||st[1]=='+'||st[2]=='+'){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
