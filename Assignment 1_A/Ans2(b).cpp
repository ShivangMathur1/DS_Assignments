#include<iostream>

#define N 4

using namespace std;

int main()
{
	int n1, n2;
	cout<<"Enter number of non-zero elements in matrix A: ";
	cin>>n1;
	int a[n1][3];
	cout<<"Enter elements: ";
	for(int i = 0; i < n1; i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	
	cout<<"Enter number of non-zero elements in matrix B: ";
	cin>>n2;
	int b[n2][3];
	for(int i = 0; i < n2; i++)
	{
		cin>>b[i][0]>>b[i][1]>>b[i][2];
	}
	
	int arr[N * N][3];
	int n = 0, x = 0, y = 0;
	for (int i = 0; i < N*N; i++)
	{
		if(y >= n2)
		{
			for(; x < n1; x++)
			{
				arr[n][0] = a[x][0];
				arr[n][1] = a[x][1];
				arr[n][2] = a[x][2];
				n++;
			}
			break;
		}
		if(x >= n1)
		{
			for(; y < n2; y++)
			{
				arr[n][0] = b[y][0];
				arr[n][1] = b[y][1];
				arr[n][2] = b[y][2];
				n++;
			}
			break;
		}
		
		if(a[x][0] == b[y][0])
		{
			if(a[x][1] == b[y][1])
			{
				arr[n][0] = a[x][0];
				arr[n][1] = a[x][1];
				arr[n][2] = a[x][2] + b[y][2];
				n++;
				x++;
				y++;
			}
			else if(a[x][1] < b[y][1])
			{
				arr[n][0] = a[x][0];
				arr[n][1] = a[x][1];
				arr[n][2] = a[x][2];
				x++;
				n++;
			}
			else
			{
				arr[n][0] = b[y][0];
				arr[n][1] = b[y][1];
				arr[n][2] = b[y][2];
				n++;
				y++;
			}
		}
		else if(a[x][0] < b[y][0])
		{
			arr[n][0] = a[x][0];
			arr[n][1] = a[x][1];
			arr[n][2] = a[x][2];
			n++;
			x++;
		}
		else
		{
			arr[n][0] = b[y][0];
			arr[n][1] = b[y][1];
			arr[n][2] = b[y][2];
			n++;
			y++;
		}
	}
	
	x = 0;
	
	cout<<"Sum of the matrices is:\n";
	
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
