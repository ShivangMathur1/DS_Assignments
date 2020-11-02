#include<iostream>

#define N 3

using namespace std;

int main()
{
	int a[N][N];
	cout<<"Enter a matrix:\n";
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin>>a[i][j];
		}
	}
	
	int x = 0, y = 0, s;
	for(int i = 0; i < N; i++)
	{
		x = i;
		y = 0;
		s = a[i][0];
		for(int j = 1; j < N; j++)
		{
			if(s > a[x][j])
			{
				s = a[x][j];
				y = j;
			}
		}
		
		int flag = 1;
		for(int j = 0; j < N; j++)
		{
			if(s < a[j][y])
			{
				flag = 0;
			}
		}

		if(flag)
		{
			cout<<"Saddle point "<<s<<" found at ("<<x + 1<<", "<<y + 1<<")";
		}
	}
	return 0;
}
