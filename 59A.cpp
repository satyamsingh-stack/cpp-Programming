#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st[10000];
	cin>>st;
	int i,s1=0,s2=0;
	for(i=0;i<strlen(st);i++){
		if(isupper(st[i]))
			s1++;
		else if(islower(st[i]))
			s2++;
	}
	if(s1==s2)
		cout<<strlwr(st)<<endl;
	else if(s1>s2)
		cout<<strupr(st)<<endl;
	else if(s2>s1)
		cout<<strlwr(st)<<endl;
}
