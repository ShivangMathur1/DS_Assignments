#include<iostream>

using namespace std;

int main()
{
	int a[3][3], b[3][3];
	cout<<"Enter matrix : ";
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin>>a[i][j];
			b[j][i] = a[i][j];
		}
	}
	
	cout<<"The transpose is:\n";
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
