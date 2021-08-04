#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st[1000],st1[1000];
	int n,beg=0,end;
	cin>>st>>st1;
	n=strlen(st);
	end=n-1;
	while(beg<=end){
		st[beg]=(st[beg]^st[end])^(st[end]=st[beg]);
		beg++;
		end--;
	}
	if(strcmp(st1,st)==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
