#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// Base Class
class employee
{
	public:
	int num;
	char name[100];
	char address[100];
	char department [100];
	char namelist[1000];
	
	public:
	
	void emp()
	{
	cout<<endl<<"Please fill the following details";
	enterdetail();
	}
	
	void enterdetail()
	{
	    cout<<endl<<"Please enter Employee number:";
		cin>>num;
		cout<<endl<<"Please enter name:";
		cin>>name;
		cout<<endl<<"Please enter address:";
		cin>>address;
		cout<<endl<<"Please enter department:";
		cin>>department;
	}
	
	void showdetail()
	{
 		cout<<endl<<"Employee number:"<<num;
		cout<<endl<<"Name:"<<name;
		cout<<endl<<"Address:"<<address;
		cout<<endl<<"Department:"<<department;
		cout<<endl<<"Employees you are incharge of:"<<namelist;
	}
	
};

// Derived Class
class manager : public employee
{
	public:
	void man()
	{
		cout<<endl<<"Please enter your details below";
		enterdetail();
		cout<<endl<<"Please enter the name of your employees:";
		cin>>namelist;
	}
};

int main()
{
	manager ma;
	int choice;
	while(1)
	{
		cout<<endl<<"Enter 1 for manager"<<endl<<"Enter 2 for employee"<<endl<<"Enter 3 to display entered detail"<<endl<<"Enter 4 to exit";
		cin>>choice;
		switch (choice)
		{
			case 1: {ma.man();break;}
			case 2: {ma.emp();break;}
			case 3: {ma.showdetail();break;}
			case 4: {exit(0);}
			default:{cout<<endl<<"Wrong Option. Try Again";}
		}
	}
	return 0;
}
