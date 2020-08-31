#include<iostream>

#define N 4

using namespace std;

int main()
{
	int a[N][N];
	cout<<"Enter a matrix:\n";
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Spiral order is: ";
	
	int dir = 0, top = 0, left = 0, bottom = N - 1, right = N - 1;
	while(top <= bottom && left <= right)
	{
		switch(dir)
		{
			case 0:
			{
				for(int i = left; i <= right; i++)
				{
					cout<<a[top][i]<<" ";
				}
				top++;
				break;
			}
			
			case 1:
			{	
				for(int i = top; i <= bottom; i++)
				{
					cout<<a[i][right]<<" ";
				}
				right--;
				break;
			}
			
			case 2:
			{
				for(int i = right; i >= left; i--)
				{
					cout<<a[bottom][i]<<" ";
				}
				bottom--;
				break;
			}
			case 3:
			{
				for(int i = bottom; i >= top; i--)
				{
					cout<<a[i][left]<<" ";
				}
				left++;
				break;
			}
		}
		dir = (dir + 1) % 4;
	}	
}
