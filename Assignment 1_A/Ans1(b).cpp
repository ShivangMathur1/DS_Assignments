#include<iostream>
#include<math.h>

#define N 4

using namespace std;

int main()
{
	int n = 3 * N - 2;
	int arr[n];
	
	cout<<"Enter a tri-diagonal matrix row-wise: ";
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int x = 0;
	
	cout<<"THe matrix is:\n";
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(abs(i - j) < 2)
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
