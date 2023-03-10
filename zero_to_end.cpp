#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) 
{
    int count = 0;  
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] != 0) {
            arr[count] = arr[i]; 
            count++;
        }
    }
    
    for (int i = count; i < n; i++) 
	{
        arr[i] = 0;
    }

    cout << "The modified array is: \n";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() 
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original Array: \n";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout<<endl;

    moveZeroes(arr, n);

    cout<<endl;
    cout<<"Array after moving all zeroes to end: \n";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
