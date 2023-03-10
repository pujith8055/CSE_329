#include<iostream>
using namespace std;

main()
{
	int c;
	cin>>c;
	int a[c],temp[c];
	for(int j=0;j<c;j++)
		{
			cin>>a[j];
		}
		for(int i=0;i<c;i++)
		{
			for(int j=i;j<c;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
		}
			for(int j=0;j<c;j++)
		{
			temp[j]=a[j];
		}
			for(int j=0;j<c;j++)
		{
			cout<<temp[j]<<ends;
		}
		int even=c/2;
		cout<<even<<endl;
		int odd=c-even;
		cout<<odd<<endl;
		for(int i=0;i<c;i=i+2)
		{
			a[i]=temp[even];
			even=even-1;
		}
   	for(int i=1;i<c;i=i+2)
		{
			a[i]=temp[odd];
			odd=odd+1;
		}
			for(int j=0;j<c;j++)
		{
			cout<<a[j]<<ends;	
		}
}