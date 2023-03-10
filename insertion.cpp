#include<iostream>
using namespace std;

int main()
{
    int item,index,as;
    cout<<"Enter array size"<<endl;
    cin>>as;
    cout<<"Enter elements array"<<endl;
    int a[as];
    for(int i=0;i<as;i++)
    {
            cin>>a[i];
    }
    cout<<"Enter item"<<endl;
    cin>>item;
    cout<<"Enter position"<<endl;
    cin>>index;
    for(int i=as-1;i>=index;i--)
    {
            a[i+1]=a[i];
    }
    a[index]=item;
    for(int i=0;i<as+1;i++)
    {
            cout<<a[i]<<endl;
    }
}
