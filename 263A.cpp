#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string st;
	cin>>st;
	sort(st.begin(),st.end());
	int l=st.length(),i,ans=0;
	for(i=1;i<l;i++){
		if(st[i]!=st[i-1]){
			ans++;
		}
	}
	if(ans&1)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}
