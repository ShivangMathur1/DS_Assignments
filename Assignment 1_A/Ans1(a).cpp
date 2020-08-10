#include<iostream>
#include<math.h>

#define N 4

using namespace std;

int main()
{
	int arr[N];
	
	cout<<"Enter a diagonal matrix: ";
	for(int i = 0; i < N; i++)
	{
		cin>>arr[i];
	}
	
	int x = 0;
	cout<<"The matrix is:\n";
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
			{
				cout<<arr[x]<<" ";
				x++;
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
