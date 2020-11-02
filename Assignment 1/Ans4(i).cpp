#include<iostream>

using namespace std;

int main()
{
	int n,  *arr, temp;
	cout<<"Enter number of elements in the array: ";
	cin>>n;
	arr = new int[n];
	cout<<"Enter the array: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i = 0; i < n/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	
	cout<<"The reversed array is: ";
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
