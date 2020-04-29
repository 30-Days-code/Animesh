#include<iostream>
#include<string>
using namespace std;
class library
{
	private:
	// Data Members
	int booknum;
	char bookname[100];
	char author[100];
	char publisher[100];
	float price;
	int issuenum;
	int totalcopy;
	
	public:
	// Data functions
	void initial()
	{
		cout<<endl<<"Please enter the book number:";
		cin>>booknum;
		cout<<endl<<"Please enter the name of the book:";
		cin>>bookname;
		cout<<endl<<"Please enter the author's name:";
		cin>>author;
		cout<<endl<<"Please enter the publisher's name:";
		cin>>publisher;
		cout<<endl<<"Please enter the price of the book:";
		cin>>price;
		cout<<endl<<"Please enter the total number of copies available:";
		cin>>totalcopy;
	}
	void issue()
	{
        cout<<endl<<"Please enter the number of copies to be issued:";
		cin>>issuenum;
		if(issuenum<=totalcopy)
		{
			totalcopy=totalcopy-issuenum;
			cout<<endl<<issuenum<<" copies issued";
		}
		else 
		{
			cout<<endl<<"Availabe copies:"<<totalcopy;
			cout<<endl<<"Please try again.";
		}
	}
	void returnbook()
	{
		int x;
		cout<<endl<<"Please enter the number of books to return:";
		cin>>x;
		totalcopy=totalcopy+x;
	}
	void display()
	{
		cout<<endl<<"Book number:"<<booknum;
		cout<<endl<<"Name of the book:"<<bookname;
		cout<<endl<<"Author's name:"<<author;
		cout<<endl<<"Publisher's name:"<<publisher;
		cout<<endl<<"Price of the book:"<<price;
		cout<<endl<<"Total number of book available:"<<totalcopy;
	}
};
int main()
{
	library book;
	cout<<endl<<"Please enter the details of the book you want to publish";
	book.initial();
	int choice;
	while (1)
	{
		cout<<endl<<"Enter 1 to issue book."<<endl<<"Please enter 2 to return book."<<endl<<"Please enter 3 to display the details of the book";
		cin>>choice;
		switch(choice)
		{
			case 1: book.issue();
			break;
			case 2: book.returnbook();
			break;
			case 3: book.display();
			break;
		    default: cout<<"Please enter a valid choice.";
		}
	}
	return 0;
}
