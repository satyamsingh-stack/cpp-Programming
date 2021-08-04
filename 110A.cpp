#include<iostream>
#include<string>
using namespace std;
int main(){
	string st;
	int i,n,count=0;
	cin>>st;
	for(i=0;i<st.length();i++){
		if(st[i]=='4'||st[i]=='7'){
			count++;
		}
	}
	if(count==4||count==7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
