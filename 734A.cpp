#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,A=0,D=0;
	string st;
	cin>>n;
	cin>>st;
	for(int i=0;i<st.length();i++){
		if(st[i]=='A')
			A++;
		else if(st[i]=='D')
			D++;
	}
	if(A>D)
		cout<<"Anton"<<endl;
	else if(D>A)
		cout<<"Danik"<<endl;
	else if(A==D)
		cout<<"Friendship"<<endl;
	return 0;
}
