#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin >> a;
	for (int g=0; g<a; g++)
	{
		int b,c; cin >> b >> c;
		int num=0; 
		for (int g=0; g<b; g++)
		{
			int d; cin >> d;
			if (d<=0) num++; 
		}
		if (num>=c)
		{
			cout << "NO" << '\n'; 
		}
		else cout << "YES" << '\n';
	}
	return 0; 
}