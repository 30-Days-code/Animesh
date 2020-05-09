#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i,j,k;
    cout<<"Enter the values of matrix 1\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element "<<i+1<<","<<j+1<<": ";
            cin>>mat1[i][j];
        }
    }
    cout<<"--------------------------------------------------------------------\n";
    cout<<"Enter the values of matrix 2\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element "<<i+1<<","<<j+1<<": ";
            cin>>mat2[i][j];
        }
    }
    cout<<"--------------------------------------------------------------------\n";
    cout<<"The product of the two matrix is:\n";
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            for(k=0;k<3;k++)    
            {    
                mat3[i][j]+=mat1[i][k]*mat2[k][j];    
            }    
        }    
    }     
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            cout<<mat3[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
return 0;  
} 
