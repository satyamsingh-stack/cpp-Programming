#include<iostream>
using namespace std;
int main(){
	string st;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>st;
		int l=st.length();
		if(l>10)
			cout<<st[0]<<l-2<<st[l-1]<<endl;
		else
			cout<<st<<endl;
	}
	return 0;
}
