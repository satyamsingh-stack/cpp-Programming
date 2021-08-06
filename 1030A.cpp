#include<iostream>
using namespace std;
int main(){
	int n,t,i,gess=0;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		if(n==1)
			gess=1;
	}
	if(gess)
		cout<<"HARD"<<endl;
	else
		cout<<"EASY"<<endl;
	return 0;
}
