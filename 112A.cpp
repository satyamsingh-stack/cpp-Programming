#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st1[21],st2[21];
	cin>>st1>>st2;
	int ans=strcmpi(st1,st2);
	cout<<ans<<endl;
	return 0;
}
