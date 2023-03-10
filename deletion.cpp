#include<iostream>
using namespace std;

int main()
{
    int index,as;
    cout<<"Enter array size"<<endl;
    cin>>as;
    cout<<"Enter elements array"<<endl;
    int a[as];
    for(int i=0;i<as;i++)
    {
            cin>>a[i];
    }
    cout<<"Enter position"<<endl;
    cin>>index;
    for(int i=index;i<as;i++)
    {
            a[i]=a[i+1];
    }
    for(int i=0;i<as-1;i++)
    {
            cout<<a[i]<<endl;
    }
}
