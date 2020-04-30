#include <iostream>
#include <string.h>
using namespace std;
void encode(char str[50],int l);
int main()
{
	char text[50];
	int length;
	cout<<"Please enter a text to be encoded: ";
	cin>>text;
	length=strlen(text);
	cout<<"The original text is: "<<text;
	encode(text,length);
}
void encode(char str[50],int l) // function to encode the entered text
{
	int i;
	for(i=0;i<l;i++)
	{
		str[i]=str[i]+10;
	}
	cout<<endl<<"The encoded text is: "<<str;
}
