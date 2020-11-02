#include<iostream>

#define N 4

using namespace std;

int main()
{
	int n1, n2;
	cout<<"Enter number of non-zero elements in matrix A (row, column, element): ";
	cin>>n1;
	int a[n1][3];
	cout<<"Enter elements: ";
	for(int i = 0; i < n1; i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	
	cout<<"Enter number of non-zero elements in matrix B (row, column, element): ";
	cin>>n2;
	int b[n2][3];
	for(int i = 0; i < n2; i++)
	{
		cin>>b[i][1]>>b[i][0]>>b[i][2];
	}
	
	
	int arr[N * N][3] = {0};
	int n = 0;
	for (int i = 0; i < n1; i++)
	{
		int y = 0;
		while(a[i][0] == b[y][0] && a[i][1] == b[i][1])
		{
			
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
