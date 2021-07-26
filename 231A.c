#include<iostream>
using namespace std;
int main(){
	int n,s1,s2,s3,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1>>s2>>s3;
		if((s1==1 && s2==1) || (s2==1 && s3==1) || (s3==1 && s1==1))
			ans=ans+1;
	}
	cout<<ans<<endl;
	return 0;
}
