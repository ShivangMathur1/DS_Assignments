#include <iostream>

using namespace std;

int main()
{
	int n, *arr, diff = -1, temp, index;
	cout<<"Enter array length: ";
	cin>>n;
	arr = new int[n];
	cout<<"Enter an array: ";
	cin>>arr[0];
	
	for(int i = 1; i < n; i++)
	{
		cin>>arr[i];
		if(diff == -1)
		{
			diff = arr[i] - arr[i - 1];
		}
		else
		{
			if(diff < arr[i] - arr[i - 1])
			{
				index = i;
			}
			else if(diff > arr[i] - arr[i - 1])
			{
				index = i - 1;
			}
		}
	}
	
	cout<<"The missing number is "<<arr[index] - diff<<" at index "<<index + 1;
	
	return 0;
}
