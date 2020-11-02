#include<iostream>

#define N 4

using namespace std;

int main()
{
	int n;
	cout<<"Enter number of non-zero elements: ";
	cin>>n;
	int arr[n + 1][3];
	arr[0][0] = N;
	arr[0][1] = N;
	arr[0][2] = n;
	cout<<"Enter elements: ";
	for(int i = 1; i <= n; i++)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
	
	for(int i = 0; i <= n; i++)
	{
		arr[i][0] = arr[i][0] + arr[i][1];
		arr[i][1] = arr[i][0] - arr[i][1];
		arr[i][0] = arr[i][0] - arr[i][1];
	}
	
	int x = 1;
	
	cout<<"Transpose of the matrix is:\n";
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(x <= n && arr[x][0] == i && arr[x][1] == j )
			{
				cout<<arr[x][2];
				x++;
			}
			else
			{
				cout<<"0";
			}
			cout<<" "; 
		}
		cout<<"\n";
	}
	return 0;
}
