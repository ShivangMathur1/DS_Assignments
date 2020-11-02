#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter size of matrix: ";
	cin>>n;
	int a[n][n];
	
	int dir = 0, top = 0, left = 0, bottom = n - 1, right = n - 1, x = 1;
	while(top <= bottom && left <= right)
	{
		switch(dir)
		{
			case 0:
			{
				for(int i = left; i <= right; i++)
				{
					a[top][i] = x;
					x++;
				}
				top++;
				break;
			}
			
			case 1:
			{	
				for(int i = top; i <= bottom; i++)
				{
					a[i][right] = x;
					x++;
				}
				right--;
				break;
			}
			
			case 2:
			{
				for(int i = right; i >= left; i--)
				{
					a[bottom][i] = x;
					x++;
				}
				bottom--;
				break;
			}
			case 3:
			{
				for(int i = bottom; i >= top; i--)
				{
					a[i][left] = x;
					x++;
				}
				left++;
				break;
			}
		}
		dir = (dir + 1) % 4;
	}
	
	cout<<"The spiral matrix is:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n\n\n";
	}
}
