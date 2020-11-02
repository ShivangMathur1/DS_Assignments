#include<iostream>

using namespace std;

int search(int size, int *arr, int e)
{
	int head = 0, tail = size - 1, mid;
	
	while (head < tail)
	{
		mid = (head + tail)/2;
		
		if(arr[mid] == e)
		{
			return mid;
		}
		if(arr[mid] < e)
		{
			tail = mid - 1;
		}
		else
		{
			head = mid + 1;
		}
	}
	
	return -1;
}

int main()
{
	int n, *arr, e;
	cout<<"Enter size of array: ";
	cin>>n;
	arr = new int[n];
	cout<<"Enter sorted array: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter element to search: ";
	cin>>e;
	
	int x = search(n, arr, e);
	if(x == -1)
	{
		cout<<"Error: Element not found";
	}
	else
	{
		cout<<"Element found at index "<<x;
	}
	
	return 0;
}
