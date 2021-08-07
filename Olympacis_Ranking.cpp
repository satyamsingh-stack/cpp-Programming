#include<iostream>
using namespace std;
int main(){
	int t,i,g1,s1,b1,g2,s2,b2,sum1,sum2;
	cin>>t;
	for(i=0;i<t;i++){
		sum1=0;
		sum2=0;
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		sum1=g1+s1+b1;
		sum2=g2+s2+b2;
		if(sum1>sum2)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
	return 0;
}
