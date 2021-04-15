// #include<iostream>
// using namespace std;
// int main()
// {
// 	int L,n;
// 	cin>>L;
// 	cin>>n;
// 	int w,h;
// 	for(int i=1;i<=n;i++)
// 	{
// 		cin>>w>>h;
//       if(w<L || h<L)
//       {
//          cout<<"UPLOAD ANOTHER"<<endl;
//       }
//       else if(w>=L && h>=L &&w==h)
//       {
//          cout<<"ACCEPTED"<<endl;
//       }
//       else
//       {
//          cout<<"CROP IT"<<endl;
//       }
// 	}
// }

// #include<iostream>
// #include<ctype.h>
// using namespace std;
// int main()
// {
//     string st;
//     cin>>st;
//     for(int i=0;i<st.size();i++)
//     {
//         if(islower(st[i]))
//         {
//             st[i]=toupper(st[i]);
//         }
//         else
//         {
//             st[i]=tolower(st[i]);
//         }
//     }
//     cout<<st<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=0,y=0,c=0;
//     char arr[20];
//     cin>>arr;
//     for(int i=0;i<=20;i++)
//     {
//         if(arr[i]=='z')
//         {
//             x=x+1;
//         }
//         else if(arr[i]=='o')
//         {
//             y=y+1;
//         }
//     }
//     for(int i=0;i<=20;i++)
//     {
//         if((2*x)==y)
//         {
//             c=1;
//             break;
//         }
//         else
//         {
//             c=0;
//             break;
//         }
//     }
//     if(c==1)
//     {
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int c=0;
// 	string st;
// 	cin>>st;
// 	for(int i=0;i<st.length();i++)
// 	{
// 		if(st[i]=='a')
// 		{
// 			c=c+1;
// 		}
// 		else if(st[i]=='b')
// 		{
// 			c=c+2;
// 		}
// 		else if(st[i]=='c')
// 		{
// 			c=c+3;
// 		}
// 		else if(st[i]=='d')
// 		{
// 			c=c+4;
// 		}
// 		else if(st[i]=='e')
// 		{
// 			c=c+5;
// 		}
// 		else if(st[i]=='f')
// 		{
// 			c=c+6;
// 		}
// 		else if(st[i]=='g')
// 		{
// 			c=c+7;
// 		}
// 		else if(st[i]=='h')
// 		{
// 			c=c+8;
// 		}
// 		else if(st[i]=='i')
// 		{
// 			c=c+9;
// 		}
// 		else if(st[i]=='j')
// 		{
// 			c=c+10;
// 		}
// 		else if(st[i]=='k')
// 		{
// 			c=c+11;
// 		}
// 		else if(st[i]=='l')
// 		{
// 			c=c+12;
// 		}
// 		else if(st[i]=='m')
// 		{
// 			c=c+13;
// 		}
// 		else if(st[i]=='n')
// 		{
// 			c=c+14;
// 		}
// 		else if(st[i]=='o')
// 		{
// 			c=c+15;
// 		}
// 		else if(st[i]=='p')
// 		{
// 			c=c+16;
// 		}
// 		else if(st[i]=='q')
// 		{
// 			c=c+17;
// 		}
// 		else if(st[i]=='r')
// 		{
// 			c=c+18;
// 		}
// 		else if(st[i]=='s')
// 		{
// 			c=c+19;
// 		}
// 		else if(st[i]=='t')
// 		{
// 			c=c+20;
// 		}
// 		else if(st[i]=='u')
// 		{
// 			c=c+21;
// 		}
// 		else if(st[i]=='v')
// 		{
// 			c=c+22;
// 		}
// 		else if(st[i]=='w')
// 		{
// 			c=c+23;
// 		}
// 		else if(st[i]=='x')
// 		{
// 			c=c+24;
// 		}
// 		else if(st[i]=='y')
// 		{
// 			c=c+25;
// 		}
// 		else 
// 		{
// 			c=c+26;
// 		}
// 	}
// 	cout<<c<<endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a,b,c;
// 	cin>>a>>b>>c;
// 	if(a>b && a>c)
// 	{
// 		cout<<a<<endl;
// 	}
// 	else if(b>a && b>c)
// 	{
// 		cout<<b<<endl;
// 	}
// 	else
// 	{
// 		cout<<c<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n*i<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=10;i++)
// 	{
// 		cout<<n*i<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	if(n%5==0)
// 	{
// 		cout<<n/5<<endl;
// 	}	
// 	else
// 	{
// 		cout<<(n/5)+1<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,Patlu=0,Motu=0,Sum=0,i=1;
//     cin>>n;
//     for(int i=1;i<n;i++)
//     {
//         Patlu=Patlu-i;
//         Motu=Motu+(2*i);
//         Sum=Motu+Patlu;
//         if(Sum>=n)
//         {
//             break;
//         }
//     }
//     if(n>Sum-(2*i))
//     {
//         cout<<"Motu"<<endl;
//     }
//     else
//     {
//         cout<<"Patlu"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// 	int x=0,y=0;
// 	string st;
// 	cin>>st;
//     for(int i=0;i<=st.length();i++)
//     {
//         if(st[i]=='L')
// 	{
// 		x=x-1;
// 	}
// 	else if(st[i]=='R')
// 	{
// 		x=x+1;
// 	}
// 	else if(st[i]=='U')
// 	{
// 		y=y+1;
// 	}
// 	else if(st[i]=='D')
// 	{
// 		y=y-1;
// 	}
//     }
// 	cout<<x<<" "<<y<<endl;
// 	return 0;
// }

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main()
// {
// 	int n;
// 	string s1,s2;
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>s1>>s2;
// 		sort(s1.begin(),s1.end());
// 		sort(s2.begin(),s2.end());
// 		if(s1==s2)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<a[i];
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	while(true)
// 	{
// 		cin>>n;
// 		if(n==42)
// 		{
// 			break;
// 		}
// 		cout<<n<<endl;
// 	}	
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int t,n;
// 	cin>>t;
// 	cin>>n;
// 	int x[t];
// 	for(int i=0;i<t;i++)
// 	{
// 		cin>>x[i];
// 	}
// 	for(int i=0;i<t;i++)
// 	{
// 		if(x[i]>=n)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int t,A=0,B=7;
// 	cin>>t;
// 	while(t--)
// 	{
//         int floor;
// 		cin>>floor;
// 		if(abs(A-floor)>abs(B-floor))
// 		{
// 			cout<<"B"<<endl;
// 			B=floor;
// 		}
// 		else
// 		{
// 			cout<<"A"<<endl;
// 			A=floor;
// 		}
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
 
//     if(s[2]=='A' || s[2]=='E' || s[2]=='O' || s[2]=='I' || s[2]=='U' || s[2]=='Y' || (((s[0])+(s[1]))%2!=0 || ((s[3])+(s[4]))%2!=0 || ((s[7])+(s[8]))%2!=0 || ((s[4])+(s[5]))%2!=0))  cout<<"invalid";
//     else cout<<"valid"; 
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int t,n;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n;
// 		for(int r=1;r<=n;r++)
// 		{
// 			for(int c=1;c<=n*2;c++)
// 			{
// 				if(c>=r+1 && c<=(n*2)-r)
// 				{
// 					cout<<"#";
// 				}
// 				else
// 				{
// 					cout<<"*";
// 				}
// 			}
// 			cout<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int r=1;r<=n*3+2;r++)
// 	{
// 		if(r%3==0)
// 		{
// 			cout<<"*****"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"*   *"<<endl;
// 		}
// 	}
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	long t,r,x,check=0;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>r>>x;
// 		if((x*100)>=(2*22*(r/7)))
// 		{
// 			check=check+1;
// 		}
// 	}
// 	cout<<check<<endl;
// 	return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// 	string st;
// 	int sum=0;
// 	cin>>st;
// 	if(st.length()!=10)
// 	{
// 		cout<<"Illegal ISBN"<<endl;
// 	}
// 	else
// 	{
// 		for(int i=0;i<st.size();i++)
// 		{
// 			sum=sum+(i+1)*(st[i]-'0');
// 		}
// 		if(sum%11==0)
// 		{
// 			cout<<"Legal ISBN"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"Legal ISBN"<<endl;
// 		}
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int SWH,EWH,x,y,deff,t,SH,SM,EH,EM;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>SH>>SM>>EH>>EM;
// 		SWH=SH*60+SM;
// 		EWH=EH*60+EM;
// 		deff=EWH-SWH;
// 		x=deff%60;
// 		y=deff/60;
// 		cout<<y<<" "<<x<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int t,n;
// 	cin>>t;
// 	while(t)
// 	{
// 		cin>>n;
// 		t=t-1;
// 		cout<<"YES"<<endl;
// 	}
// }

