#include<iostream>
using namespace std;
int main(){
int matrix[3][3];

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>matrix[i][j];
}
}

int col=0,row=0;
for(int k=0;k<3;k++)
row+=matrix[3/2][k];

cout<<"Sum of row:"<<row<<endl;
for(int m=0;m<3;m++)
col+=matrix[m][3/2];
cout<<"sum of column: "<<col;
return 0;
}