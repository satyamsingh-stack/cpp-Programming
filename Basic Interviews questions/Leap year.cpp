#include<bits/stdc++.h>
using namespace std;
void leapyear(int n){
	if((n%4==0) && (n%100!=0) || (n%400==0))
		cout<<"Leap Year";
	else
		cout<<"Not";
}
int main(){
	int n;
	cin>>n;
	leapyear(n);
	return 0;
}
