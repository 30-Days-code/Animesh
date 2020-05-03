#include<iostream>
#include<string.h>
using namespace std;
class TravelPlan
{
    private: 
    long PlanCode;
    char Place[50];
    int Number_of_travellers;
    int Number_of_buses;
    
    public:
    TravelPlan()
    {
        PlanCode=1001;
        strcpy(Place,"Agra");
        Number_of_travellers=5;
        Number_of_buses=1;
    }
    void NewPlan()
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"Enter Plan Code: ";
        cin>>PlanCode;
        cout<<"Enter Destination: ";
        cin>>Place;
        cout<<"Enter the number of travellers: ";
        cin>>Number_of_travellers;
        if(Number_of_travellers>1001 && Number_of_travellers<20)
            Number_of_buses=1;
        else if(Number_of_travellers>=20 && Number_of_travellers<40)
            Number_of_buses=2;
        else if(Number_of_travellers>=40)
            Number_of_buses=3;
        else
            cout<<"Please enter valid number of passengers\n";
        cout<<"----------------------------------------------"<<endl;
    }
    void ShowPlan()
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"Plan Code: "<<PlanCode;
        cout<<"\nDestination: "<<Place;
        cout<<"\nNumber of travellers: "<<Number_of_travellers;
        cout<<"\nNumber of buses: "<<Number_of_buses;
        cout<<"\n----------------------------------------------"<<endl;
    }
};
int main()
{
    int choice;
    TravelPlan a;
    while(1)
    {
        cout<<"Press 1 to enter plan details\npress 2 to show plan details\nPress 3 to exit";
        cin>>choice;
        switch(choice)
        {
            case 1:{a.NewPlan();break;}
            case 2:{a.ShowPlan();break;}
            case 3:{exit (0);}
            default:{cout<<"Error: Wrong Choice. Try Again.";}
        }
    }
}
