#include<iostream>
using namespace std;
void starpyramid()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<4;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        for(j=2;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
void reverse_starpyramid()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=i;j<4;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        for(j=2;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
void numberpyramid()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
            cout<<" ";
        for(j=1,k=i;j<=i;j++,k++)
            cout<<k;
        for(j=i,k=(i-1)*2;j>=2;j--,k--)
            cout<<k;
        cout<<endl;
    }
}
void floydtriangle()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
            cout<<k++;
        cout<<endl;
    }
}
void pascaltriangle()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        int val = 1;
        for(j=i;j<5;j++)
        {
            cout <<" ";
        }
        for (j=0;j<=i;j++)
        {
            cout <<" "<<val;
            val=val*(i-j)/(j+1);
        }
        cout <<endl;
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"----------------------------------------------------------------\n";
        cout<<"Enter 1 to print star pyramid\nEnter 2 to print number pyramid\nEnter 3 to print reverse star pramid\nEnter 4 to print Pascal's triangle\nEnter 5 to print Floyd's triangle\nEnter 6 to exit";
        cin>>choice;
        switch(choice)
        {
            case 1:{starpyramid();break;}
            case 2:{numberpyramid();break;}
            case 3:{reverse_starpyramid();break;}
            case 4:{pascaltriangle();break;}
            case 5:{floydtriangle();break;}
            case 6:{exit(0);}
            default:{cout<<"ERROR: Wrong choice. Try again.";}
        }
    }
}
