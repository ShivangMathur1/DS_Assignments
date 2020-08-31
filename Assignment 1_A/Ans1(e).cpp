#include<iostream>
#include<math.h>

#define N 4

using namespace std;

int main()
{
	int n = N * (N + 1) / 2;
	int arr[n];
	
	cout<<"Enter a symmetric matrix row-wise: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int x = 0;
	int y = 0;
	cout<<"The matrix is:\n";
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i < j)
			{
				cout<<arr[x]<<" ";
				x++;
			}
			else if(j < i)
			{
				cout<<arr[y]<<" ";
				if(i - j == 1)
				{
					y = i;
				}
				else
				{
					y +=  (N - 1) - j;
				}
			}
			else
			{
				cout<<arr[x]<<" ";
				x++;
				y++;
			}
			
		}
		cout<<"\n";
	}
	return 0;
}
