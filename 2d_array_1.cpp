#include<iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"Enter no of rows in array:";
	cin>>r;
	cout<<endl;
	cout<<"Enter no of coloumns in array:";
	cin>>c;
	cout<<endl;
	int a[r][c],b[r][c],n[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
			cout<<"\t";
			
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
			cout<<"\t";
			
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			n[i][j]=0;
			
		}
	}
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for transpose"<<endl;
	int condition;
	cin>>condition ;
switch (condition ) {
  case 1:
    for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			n[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<n[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
    break;
  case 2:
    for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		n[i][j]=a[i][j]-b[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<n[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
    break;
  case 3:
  	
    for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
	       for(int k=0;k<r;k++)
	       {
		     n[i][j]=n[i][j]+(a[i][k]*b[k][j]);
		     
	       }
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<n[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
    break;
  case 4:
   for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			n[i][j]=a[j][i];
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<n[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	   for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			n[i][j]=b[j][i];
		}
		cout<<endl;
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<n[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	
    break;
}
}