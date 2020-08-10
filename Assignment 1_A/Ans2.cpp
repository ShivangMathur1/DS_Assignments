#include<iostream>

#define N 4

using namespace std;

int main()
{
	int n, **arr;
	cout<<"Enter number of non-zero elements: ";
	cin>>n;
	arr = new[n][3];
	cout<<"Enter elements: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i][0]<<arr[i][1]<<arr[i][2];
	}
	return 0;
}
