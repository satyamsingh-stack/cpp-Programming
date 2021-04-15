#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	string st="Satyam";
	for(int i=0;i<st.length();i++)
	{
		cout<<st[st.length()-2]<<endl;
		break;
	}
	return 0;
}

// cout<<st.back()<<endl; can also use to get only last element.