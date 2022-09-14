#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
	int res=max(a,b);
	while(true){
		if(res%a==0 && res%b==0)
			break;
		res++;
	}
	return res;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<LCM(a,b);
	return 0;
}
