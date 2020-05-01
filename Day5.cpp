#include<iostream>
#include<string.h>
using namespace std;
class clothing
{
	private:
	char code[20];
	char type[20];
	int size;
	char material[20];
	float price;
	void calc_price();
	
	public:
	clothing()
	{
	    strcpy(code,"NOT ASSIGNED");
	    strcpy(type,"NOT ASSIGNED");
	    strcpy(material,"NOT ASSIGNED");
	    size=0;
	    price=0;
    }
	void enter();
	void show();
};
void clothing::calc_price()
{
    if(strcmp(material,"COTTON")==0)
    { 
        if(strcmp(type,"TROUSER")==0)
            price=1500;
        if(strcmp(type,"SHIRT")==0)
            price=1200;
    }
    else
    { 
        if(strcmp(type,"TROUSER")==0)
            price=1500*0.75;
        if(strcmp(type,"SHIRT")==0)
            price=1200*0.75;
    }
}
void clothing::enter()
{
	cout<<endl<<"Please enter the code: ";
	cin>>code;
	cout<<endl<<"Please enter the type(TROUSER/SHIRT): ";
	cin>>type;
	cout<<endl<<"Please enter the size: ";
	cin>>size;
	cout<<endl<<"Please enter the material(COTTON/DENIM/SILK): ";
	cin>>material;
	calc_price();
}
void clothing::show()
{
	cout<<endl<<"Entered code is: "<<code;
	cout<<endl<<"Entered type is: "<<type;
	cout<<endl<<"Entered size is: "<<size;
	cout<<endl<<"Entered material is: "<<material;
	cout<<endl<<"The price is: "<<price<<endl;
}
int main()
{
	int choice;
	clothing cloth;
	while(1)
	{
		cout<<"Please press 1 to enter details";
		cout<<endl<<"Please press 2 to show entered details";
		cout<<endl<<"Please press 3 to exit";
		cin>>choice;
		switch(choice)
		{
			case 1:{cloth.enter();break;}
			case 2:{cloth.show();break;}
			case 3:{exit (0);}
			default:{cout<<"Error! Please press a valid choice";}
		}
	}
}
