#include<iostream>
using namespace std;
int main()
{
int a1[3][3], a2[3][3], a3[3][3], i, j,asub[i][j],aadd[i][j];
cout<<"Enter 9 Elements for First array: ";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
cin>>a1[i][j];
}
cout<<"Enter 9 Elements for Second array: ";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
cin>>a2[i][j];
}

//Addition

for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
aadd[i][j] = a1[i][j] + a2[i][j];
}
cout<<"\nThe New Matrix (Addition Result) is:\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
cout<<aadd[i][j]<<" ";
cout<<endl;
}

//Subtraction

for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
asub[i][j] = a1[i][j] - a2[i][j];
}
cout<<"\nThe New Matrix (Subtraction Result) is:\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
cout<<asub[i][j]<<" ";
cout<<endl;
}

//Multiplication

for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
asub[i][j] = a1[i][j] * a2[i][j];
}
cout<<"\nThe New Matrix (Multiplication Result) is:\n";
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
cout<<asub[i][j]<<" ";
cout<<endl;
}
cout<<endl;
return 0;
}