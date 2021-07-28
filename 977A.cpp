#include<iostream>
using namespace std;
int main(){
	int n,k,i,ans;
	cin>>n>>k;
	for(i=0;i<k;i++){
		ans=n%10;
		if(ans!=0){
			n=n-1;
		}
		else if(ans==0){
			n=n/10;
		}
	}
	cout<<n<<endl;
	return 0;
}
