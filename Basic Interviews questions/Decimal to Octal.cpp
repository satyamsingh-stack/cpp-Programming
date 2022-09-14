//Time Comp: O(n)
#include<bits/stdc++.h>
using namespace std;
void d_to_octal(int n){
	int arr[100],i=0;
	while(n){
		arr[i]=n%8;
		n=n/8;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		cout<<arr[j];
}
int main(){
	int n;
	cin>>n;
	d_to_octal(n);
	return 0;
}
