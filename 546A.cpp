#include<iostream>
using namespace std;
int main(){
	int n,k,w,i,ans=0,ans1,final;
	cin>>k>>n>>w;
	for(i=1;i<=w;i++){
		ans1=k*i;
		ans=ans+ans1;
	}
	final=ans-n;
	if(n>=ans)
		cout<<0<<endl;
	else
		cout<<final<<endl;
	return 0;
}
