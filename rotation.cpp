#include<iostream>
using namespace std;
main()
{
int sa,ar;
cout<<"Size of array:"<<endl;
cin>>sa;
int a[sa];
cout<<"Enter numbers in array:"<<endl;
for(int i=0;i<sa;i++)
{
cin>>a[i];
}
cout<<"How many array rotation required:";
cin>>ar;
for(int i=0;i<ar;i++)
{

for(int j=sa-1;j>=0;j--)
{
a[j+1]=a[j];


if(j==0)
{
a[j]=a[sa];

}
}
}
for(int i=0;i<sa;i++)
{
cout<<a[i]<<endl;
}
}