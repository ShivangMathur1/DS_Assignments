#include<iostream>

#define N 3

using namespace std;

int main()
{
	cout<<"Enter a matrix:\n";
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin>>a[i][j];
		}
	}
	
	int x = 0, y = 0;
	for(int i = 0; i < N; i++)
	{
		x = i;
		y = 0;
		for(int j = 1; j < N; j++)
		{
			if(s > a[i][j])
			{
				y = j;
			}
		}
		
	}
	return 0;
}
