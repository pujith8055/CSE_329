#include<iostream>
using namespace std;

int bs(int arr[], int l, int r, int x)
{
	if (r>=l) {
		int mid=l+(r-l)/2;
        if (arr[mid]==x)
			return mid;
        if (arr[mid]>x)
			return bs(arr, l, mid-1, x);
    return bs(arr, mid+1, r, x);
	}
return -1;
}
int main(void)
{
	int arr[]={2, 3, 4, 10, 40};
	int x=10;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=bs(arr,0 , n-1, x);
	(result==-1)
	? cout<<"Item is not present in array" : cout <<"Item is present at index "<< result;
	return 0;
}
