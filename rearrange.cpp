#include <iostream>
using namespace std;

void print_array(int arr[], int x)
{
    for (int i = 0; i < x; i++) 
	{
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void rearrange(int arr[], int x) 
{
    int i = -1, j = 0;
    while (j != x) {
        if (arr[j] < 0) 
		{
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }

    int p = i + 1, x = 0;
    while (p < x && n < p && arr[n] < 0) 
	{
        int temp = arr[n];
        arr[n] = arr[p];
        arr[p] = temp;
        p++;
        n += 2;
    }

    cout << "The modified array is: \n";
    print_array(arr,x);
}

int main() 
{
    int arr[] = {-3 ,5 ,-2 ,-9 ,4 ,-1 ,7 ,-8 ,6};
    int x = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original Array: \n";
    print_array(arr,x);

    rearrange(arr, x);

    cout<<"Array after rearranging in alternating positive & negative items: \n";
    print_array(arr,x);

    return 0;
}
