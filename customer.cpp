#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
	int acno;
	char name[51],mobile[11];
	double balance;

	public:
	//constructor
	Customer(int a, char *n, char *m, double openingamount){
		acno=a;
		strcpy(name,n);
		strcpy(mobile,m);
		balance=openingamount;
	}	
	void setMobile(char *m){
		strcpy(mobile,m);
	}
	int getAcno(){
		return acno;
	}
	char *getName(){
		return name;
	}
	char *getMobile(){
		return mobile;
	}
	double getBalance(){
		return balance;
	}
	void deposit(double amount){
		balance=balance+amount;
	}
	void  withdraw(double amount){
		balance=balance-amount;
	}
};
main(){
	Customer c(123,"Rohit Sharma","9810849501",4000);
	cout << c.getAcno() << "," << c.getName() << "," << c.getMobile() << "," << c.getBalance() << endl;
 	c.deposit(4000);
	cout << c.getAcno() << "," << c.getName() << "," << c.getMobile() << "," << c.getBalance() << endl;
	c.withdraw(2300);
	cout << c.getAcno() << "," << c.getName() << "," << c.getMobile() << "," << c.getBalance() << endl;
	c.setMobile("9625372486");
	cout << c.getAcno() << "," << c.getName() << "," << c.getMobile() << "," << c.getBalance() << endl;
}

