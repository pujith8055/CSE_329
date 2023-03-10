#include<iostream> 
using namespace std;
main()
{
	int i,n; 
	int a[n]; 
	int c=0;
	cout<<"Enter the no of elements of the array:\n"; 
	cin>>n; 
	for(int i=0;i<n;i++) 
	{ 
		cin>>a[i]; 
	} 
	for(int i=0;i<n;i++) 
	{ 
		for(int j=i+1;j<n;j++) 
		{ 
			if(a[i]%2!=0 && a[j]%2==0) 
			{ 
				c=c+1; 
			} 
			else if(a[j]%2!=0 && a[i]%2==0) 
			{ 
				c=c+1;
			}
		}
	}
	cout<<"count in a set one is odd another one is even: "<<c;
}