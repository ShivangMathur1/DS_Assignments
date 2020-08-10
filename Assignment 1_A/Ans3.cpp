#include<iostream>

using namespace std;

int main()
{
	int a[3][3], row[3] = {0}, col[3] = {0};
	
	cout<<"Enter a matrix:\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin>>a[i][j];
			row[i] += a[i][j];
			col[j] += a[i][j];
		}
	}
	for(int i = 0; i < 3; i++)
	{
		cout<<"Sum of row "<<i + 1<<" is: "<<row[i]<<"\n";
	}
	for(int i = 0; i < 3; i++)
	{
		cout<<"Sum of column "<<i + 1<<" is: "<<col[i]<<"\n";
	}

	return 0;
}
