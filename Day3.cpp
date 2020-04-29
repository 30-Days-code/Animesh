#include<iostream>
using namespace std;
int main()
{
	int num;
	string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string tens[]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	cout<<"Please enter a number between 0 and 999 : ";
    cin>>num;
 	if(num<0 || num>=1000)
	{
		cout<<"Please enter a number between 0 and 999";
	}
	else if(num>=0 && num<=19)
	{
		cout<<"The number entered in words is : "+ones[num];
	}
	else if(num>=20 && num<=99)
	{
		cout<<"The number entered in words is : "+tens[(num/10)-2]+" "+ones[num%10];
	}
	else if(num>=100 && num<=119)
	{
		cout<<"The number entered in words is : "+ones[num/100]+" hundred "+ones[num%100];
	}
	else
	{
		cout<<"The number entered in words is : "+ones[num/100]+" hundred "+tens[((num%100)/10)-2]+" "+ones[(num%100)%10];
	}
	return 0;
}
